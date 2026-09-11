#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>Maxpq;
    Maxpq.push(1);
    Maxpq.push(2);
    Maxpq.push(3);
    Maxpq.push(4);
    Maxpq.push(5);

    cout<<Maxpq.top()<<endl;
    while(!Maxpq.empty())
    {
        cout<<Maxpq.top()<<endl;
        Maxpq.pop();
    }
    
}