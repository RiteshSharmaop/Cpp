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
    bool dfsCycle(int src , map<int, bool> &visited){
        if(visited[src] == false){
            visited[src] = 1;
            for(auto i : adjList[src]){
                bool cycle = dfsCycle(i,visited);
                if(cycle) return true;
                visited[i] = false;
            }
        }else {
            return true;
        }
        return false;
    }
    bool dfsLoveBCyclede(int src , map<int , bool> &visited , map<int , bool> &dfsVisited ){
        visited[src] = true;
        dfsVisited[src] = true;

        for(auto neighbour : adjList[src]){
            if(!visited[neighbour]) {
                bool checkCyc = dfsLoveBCyclede(neighbour , visited , dfsVisited);
                if(checkCyc) return true;
            }else if(visited[neighbour] && dfsVisited[neighbour]){
                return true;
            }
        }
        dfsVisited[src] = false;
        return false;
    }
    bool bfsCycleDetect(int src){
        map<int , bool > visited;
        queue<int> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto neighbour : adjList[src]){
                if(visited[neighbour]) return true;
                else {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
        return false;
    }
    
    void printAdj(){
        for(auto i : adjList){
            cout << i.first << "-> ";
            for(auto j : i.second)
                cout << j << " ";
            cout <<  endl;
        }
    }
};
int main() {
    
    Graph<int> G;
    G.addEdge(1,2,1);
    G.addEdge(2,3,1);
    G.addEdge(2,4,1);
    G.addEdge(3,7,1);
    G.addEdge(3,8,1);
    // G.addEdge(2,4,1);  // disconnected component

    G.addEdge(8,7,1);
    G.addEdge(4,5,1);
    G.addEdge(5,6,1);
    G.addEdge(6,4,1);
    
    G.printAdj();
    cout <<endl << endl;

    map<int,bool> visited;
    map<int,bool> visited2;
    map<int,bool> visited3;

    int n = 8;
    // To handle Disconnected components
    for(int i = 1 ; i <= n ; ++i ){
        if(!visited[i]){
            // G.dfs(i, visited);/
            cout << "dfsCycle : " << G.dfsCycle(i, visited) << endl;
            cout << "Lovebabbar Cycle : " << G.dfsLoveBCyclede(i, visited2, visited3);
            return 0;
        }
    }
    // cout << "BFS Cycle : " << G.bfsCycleDetect(1);
    
    return 0;
}