class Graph {
public:
    vector<vector<int>>Adj_matrix;
    int N;
    Graph(int n, vector<vector<int>>& edges) {
        N=n;
        Adj_matrix=vector<vector<int>>(n,vector<int>(n,1e9));
        
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            int cost=edge[2];
            
            Adj_matrix[u][v]=cost;
        }
        
        for(int i=0;i<n;i++)
        {
            Adj_matrix[i][i]=0;
        }
        
        //floye warshall
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<N;i++){
                
            
            for(int j=0;j<N;j++)
            {
                Adj_matrix[i][j]=min(Adj_matrix[i][j],Adj_matrix[i][k]+Adj_matrix[k][j]);
            }
            }
        }
    }
    
    void addEdge(vector<int> edge) {
        int u=edge[0];
        int v=edge[1];
        int cost=edge[2];
        
        //check this edge u-->v
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                Adj_matrix[i][j]=min(Adj_matrix[i][j],Adj_matrix[i][u]+cost+Adj_matrix[v][j]);
            }
        }
    }
    
    int shortestPath(int node1, int node2) {
        return Adj_matrix[node1][node2]==1e9?-1:Adj_matrix[node1][node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */