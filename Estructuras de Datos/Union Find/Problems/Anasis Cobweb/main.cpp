#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int v[10000];
int parent[10000];
int rango[10000];

int n;

void init() {
    for(int i=0;  i<= n; i++) {
        parent[i] = i;
        rango[i] = 0;
    }
}

int find(int x) {
    if(x == parent[x]) {
        return x;
    }
    else {
        parent[x] = find(parent[x]);
        
        return parent[x];
    }
}

void unionRango(int x,int y) { 
    int xRaiz = find(x);
    int yRaiz = find(y);
    if(xRaiz == yRaiz){
        return;
    }
    if(rango[xRaiz] > rango[yRaiz]) {
        parent[yRaiz] = xRaiz;

    } else {
        parent[xRaiz] = yRaiz;
        if(rango[xRaiz] == rango[yRaiz]) {
            rango[yRaiz]++;
        }
    }
    n--;
}

int main() {
    input;
    int m;
    cin>>n>>m;
    init();
    vector<bool> threadsConected(m);

    vector<pair<int,int>> threadsConection;
   
    
    for (int i = 0; i < m; i++){
        int beginNode, endNode;
        cin>>beginNode>>endNode;
         
        threadsConection.push_back(make_pair(beginNode,endNode));
        threadsConected[i]=1;
    }

    int q;
    cin>>q;
   
    stack<int> disconectThreads;

    for (int i = 0; i < q; i++){
        int qn;
        cin>>qn;
        disconectThreads.push(qn);
        threadsConected[qn-1] = 0;
    }

    pair<int,int> actualNode;

    for (int i = 0; i < m; i++){
        if(threadsConected[i]){
            actualNode = threadsConection[i];
            unionRango(actualNode.first,actualNode.second);
        }
    }

    vector<int> ans;
    ans.push_back(n);
    while(disconectThreads.size() > 1){
        int makeconection = disconectThreads.top();
        disconectThreads.pop();
        actualNode = threadsConection[makeconection-1];
        unionRango(actualNode.first,actualNode.second);
        ans.push_back(n);
    }
    
    cout<<ans[ans.size()-1];
    for(int i = ans.size()-2; i >= 0; i--)  cout<<" "<<ans[i];

    cout<<endl;
    return 0;
}

