#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Graph{
    public:
        map<T,list<T>> adjList;
        
        
    
    void addEdge(T u , T v , bool direaction){
        // create u -> v
        adjList[u].push_back(v);

        // check undirected graph
        if(!direaction){
            // create v -> u
            adjList[v].push_back(u);
        }
    }

    void bfs(int src , map<int,bool> &visited){
        queue<int> q;
        q.push(src);
        
        visited[src] = 1;

        while(!q.empty()){
            
            int front = q.front();
            q.pop();
            cout<<front<<" ";

            for(auto i : adjList[front]){
                if(!visited[i]) {
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }
    void printAdj(){
        for(auto i : adjList){
            cout << i.first << "-> ";
            for(auto j : i.second)
                cout << j << " ";
            cout <<  endl;
        }
    }
    bool isCyclicBFS(int src){
        map<int, int> parent;
        map<int , bool> visited;
        queue<int> q;
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto neighbour : adjList[front]){
                if(visited[front] && neighbour != parent[front]){
                    return true;
                }else if(!visited[front]){
                    visited[front] = 1;
                    parent[neighbour] = front;
                    q.push(neighbour);
                }

            }
        }
        return false;
    }
    bool isCyclicDFS(int src , int parent , map<int,bool> & visited){
        visited[src] = 1;

        for(auto neighbour : adjList[src] ){
            if(!visited[neighbour]){
                bool cycleDet = isCyclicDFS(neighbour , src , visited);
                if(cycleDet) return true;
            }else if(visited[neighbour] && neighbour != parent) return true;
        }
        return false;
    }
};
int main() {
    
    Graph<int> G;
    G.addEdge(1,2,0);
    G.addEdge(2,3,0);
    G.addEdge(3,4,0);
    G.addEdge(3,5,0);
    // G.addEdge(4,5,0);
    G.addEdge(2,6,0);
    G.addEdge(6,7,0);
    // G.addEdge(7,8,0);
    // G.printAdj();
    cout <<endl << endl;

    map<int,bool> visited;

    int n = 5;
    // To handle Disconnected components
    for(int i = 0 ; i < n ; ++i ){
        if(!visited[i]){
            G.bfs(i, visited);

        }
    }cout << endl;
    bool  ans = false;
    for(int i = 0 ; i < n ; ++i ) {
        if(G.isCyclicBFS(i)){
            ans = true;
        }
    }
    cout << ans << endl;

    // ans = false;
    // map<int,bool> visited2;
    // for(int i = 0 ; i < n ; ++i ) {
    //     if( G.isCyclicDFS(i,-1,visited2)){
    //         ans = true;
    //     }
    // }
    // cout << ans << endl;


    
    return 0;
}