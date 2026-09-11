#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>Minpq;
    Minpq.push(1);
    Minpq.push(2);
    Minpq.push(3);
    Minpq.push(4);
    Minpq.push(5);

    cout<<Minpq.top()<<endl;
    while(!Minpq.empty())
    {
        cout<<Minpq.top()<<endl;
        Minpq.pop();
    }
    
}