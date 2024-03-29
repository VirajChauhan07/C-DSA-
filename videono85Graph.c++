#include <bits/stdc++.h>

using namespace std;

class graph{

    public:
        unordered_map<int, list<int>> adj;

        void addEdge(int u, int v, bool direction){
            // Direction for undirected 0
            // Direction for directed 1;
            // create ans edge from U ans V

            adj[u].push_back(v);
            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){

            for(auto i:adj){
                cout<< i.first << "->";
                for(auto j:i.second){
                    cout<< j <<",";
                }
                cout<<endl;
            }
        }

};

int main(){

    int n;
    cout<< "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    cout<<"Enter the number of edges" << endl;
    cin >> m;

    graph g;

    for(int i =0 ; i<m ; i++){
        int u ,v ;
        cin >> u >> v;
        // creating  an undirected graph 
        g.addEdge(u, v, 1);
    }

    g.printAdjList();

    return 0;
}