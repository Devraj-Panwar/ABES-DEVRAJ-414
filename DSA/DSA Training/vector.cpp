/*Create an print an undirected graph using adjacency list representation*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,E,i,a,b;
    cout<<"Enter the number of vertices and edges: ";
    cin>>N;
    vector<int> adj[N];
    cout<<"Enter the edges: "<<endl;
    cin>>E;
    for(i=0;i<E;i++){
        cout<<"Enter the endpoints of edge:";
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    cout<<"\nAdjacency List Representation of Graph:"<<endl;
    for(i=0;i<N;i++){
        cout<<"Vertex "<<i<<" -> ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
