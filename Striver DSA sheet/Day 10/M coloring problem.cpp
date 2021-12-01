bool isvalid(int node,bool graph[101][101],int color[],int col,int v){
    for(int i=0;i<v;i++){
        if(i!=node&&graph[i][node]==1&&color[i]==col)return false;
    }
    return true;
}
bool solve(int node,int color[],bool graph[101][101],int m , int v){
    if(node==v)return true;
    for(int i=1;i<=m;i++){
        if(isvalid(node,graph,color,i,v)){
            color[node]=i;
            if(solve(node+1,color,graph,m,v))return true;
            color[node]=0;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int v)
{
    int color[v]={0};
    if(solve(0,color,graph,m,v))return true;
    return false;
}