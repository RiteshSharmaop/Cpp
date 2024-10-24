#include<bits/stdc++.h>
using namespace std;

template<typename T>
// T.C --> O(V+E)

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

    void topologicalSortOrKahnsAlgorithm(){
        map<int ,int> inDegree;
        queue<int> q;
        for(auto i : adjList) {
            inDegree[i.first] = 0;
        } 
        for(auto i : adjList) {
            for(auto j : i.second) {
                inDegree[j]++;
            }
        }
        for(auto i : inDegree){
            if( i.second == 0){
                q.push(i.first);
            }
        }

        while(!q.empty()) {
            int front = q.front();
            q.pop();
            cout << front << " ";
            for(auto neighbour : adjList[front]) {
                inDegree[neighbour]--;
                if(inDegree[neighbour] == 0){
                    q.push(neighbour);
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
};
int main() {
    
    Graph<int> G;
    G.addEdge(1,2,1);
    G.addEdge(1,3,1);
    G.addEdge(2,5,1);
    G.addEdge(3,5,1);
    G.addEdge(5,4,1);
    G.addEdge(6,7,1);
    G.addEdge(8,7,1);

    
    cout << "List : ";
    G.printAdj();
    cout <<endl << endl;

    
    G.topologicalSortOrKahnsAlgorithm();

    

    
    return 0;
}