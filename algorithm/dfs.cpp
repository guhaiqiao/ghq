#include<iostream>
#include<list>
using namespace std;
class Graph{
    private:
      int V;
      list<int> *adj;
      void DFSUtil(int v, bool visit[]);
    public:
      Graph(int V);
      void addEdge(int v, int w);
      void DFS(int v);
};
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v,int w){
    adj[v].push_back(w);//添加边
}
void Graph::DFSUtil(int v,bool visit[]){
    visit[v] = true;//该节点已被遍历
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i){
        if(!visit[*i])
            DFSUtil(*i, visit);
    }
}
void Graph::DFS(int v){
    bool *visit = new bool[V];
    for (int i = 0; i < V; i++){
        visit[i] = false;
    }
    DFSUtil(v,visit);
}
int main(){
    Graph a(4);
    a.addEdge(0, 1);
    a.addEdge(0, 2);
    a.addEdge(1, 2);
    a.addEdge(2, 0);
    a.addEdge(2, 3);
    a.addEdge(3, 3);
    a.DFS(2);
    return 0;
}