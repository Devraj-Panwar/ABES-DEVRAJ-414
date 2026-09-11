#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next; 
};

struct node* getnode() {
    return ((struct node*)malloc(sizeof(struct node)));
}

struct node* insertbeg(struct node *start,int x) {
    struct node*ptr=getnode();
    ptr->data=x;
    if(start==nullptr) {
        ptr->next=ptr;
        start=ptr;
    } else {
        ptr->next=start->next;
        start->next=ptr;
    }
    return start;
}

struct node* insend(struct node * start,int x) {
    struct node*a=getnode();
    a->data=x;
    if(start==nullptr) {
        a->next=a;
        return a;
    }
    a->next=start->next;
    start->next=a;
    start=a;
    return start;
}

struct node* insmid(struct node*start,struct node*key,int x) {
    if(key==nullptr) return start;
    struct node*a=getnode();
    a->data=x;
    a->next=key->next;
    key->next=a;
    if(key==start) start=a;
    return start;
}

void traverse(struct node *start) {
    if(start==nullptr) {
        cout<<"List empty\n";
        return;
    }
    struct node* ptr=start->next;
    do {
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    } while(ptr!=start->next);
    cout<<endl;
}

int cntnd(struct node*start) {
    if(start==nullptr) return 0;
    int cnt=0;
    struct node* ptr=start->next;
    do {
        cnt++;
        ptr=ptr->next;
    } while(ptr!=start->next);
    return cnt;
}

struct node* delbeg(struct node* start) {
    if(start==nullptr) {
        cout<<"List empty\n";
        return nullptr;
    }
    if(start->next==start) {
        free(start);
        return nullptr;
    }
    struct node* temp=start->next;
    start->next=temp->next;
    free(temp);
    return start;
}

struct node* delend(struct node* start) {
    if(start==nullptr) {
        cout<<"List empty\n";
        return nullptr;
    }
    if(start->next==start) {
        free(start);
        return nullptr;
    }
    struct node* ptr=start->next;
    while(ptr->next!=start) ptr=ptr->next;
    ptr->next=start->next;
    free(start);
    start=ptr;
    return start;
}

struct node* delmid(struct node* start, struct node* key) {
    if(start==nullptr || key==nullptr || key->next==start->next) {
        cout<<"Invalid delete\n";
        return start;
    }
    struct node* temp=key->next;
    key->next=temp->next;
    if(temp==start) start=key;
    free(temp);
    return start;
}

int searchNode(struct node* start,int x) {
    if(start==nullptr) return -1;
    int pos=1;
    struct node* ptr=start->next;
    do {
        if(ptr->data==x) return pos;
        ptr=ptr->next;
        pos++;
    } while(ptr!=start->next);
    return -1;
}

int main() {
    struct node* start=nullptr;
    int ch,val,pos;
    while(true) {
        cout<<"\nMenu:\n";
        cout<<"1. Insert at beginning\n";
        cout<<"2. Insert at end\n";
        cout<<"3. Insert after position\n";
        cout<<"4. Delete at beginning\n";
        cout<<"5. Delete at end\n";
        cout<<"6. Delete after position\n";
        cout<<"7. Traverse\n";
        cout<<"8. Count nodes\n";
        cout<<"9. Exit\n";
        cout<<"10. Search\n";
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch) {
            case 1:
                cout<<"Enter value: ";
                cin>>val;
                start=insertbeg(start,val);
                break;
            case 2:
                cout<<"Enter value: ";
                cin>>val;
                start=insend(start,val);
                break;
            case 3:
                cout<<"Enter position (1-based): ";
                cin>>pos;
                cout<<"Enter value: ";
                cin>>val;
                if(pos<=0 || pos>cntnd(start)) {
                    cout<<"Invalid position\n";
                } else {
                    struct node* key=start->next;
                    for(int i=1;i<pos;i++) key=key->next;
                    start=insmid(start,key,val);
                }
                break;
            case 4:
                start=delbeg(start);
                break;
            case 5:
                start=delend(start);
                break;
            case 6:
                cout<<"Enter position (1-based, delete after this): ";
                cin>>pos;
                if(pos<=0 || pos>=cntnd(start)) {
                    cout<<"Invalid position\n";
                } else {
                    struct node* key=start->next;
                    for(int i=1;i<pos;i++) key=key->next;
                    start=delmid(start,key);
                }
                break;
            case 7:
                traverse(start);
                break;
            case 8:
                cout<<"Total nodes: "<<cntnd(start)<<endl;
                break;
            case 9:
                cout<<"Exiting...\n";
                return 0;
            case 10:
                cout<<"Enter value to search: ";
                cin>>val;
                pos=searchNode(start,val);
                if(pos==-1) cout<<"Not found\n";
                else cout<<"Found at position "<<pos<<"\n";
                break;
            default:
                cout<<"Invalid choice\n";
        }
    }
}
