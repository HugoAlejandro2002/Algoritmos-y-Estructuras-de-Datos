#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
int length[] = {1,3,5,7};
int precios[] = {2,15,20,50};   
int dp[100000];


int solve_dp(int lengthBarra) { 
    if(lengthBarra == 0) {
        return 0;
    }
    
    if(dp[lengthBarra] == -1) { 
        int gananciaMaxima = -1;
        for(int i = 0; i < sizeof(length)/sizeof(length[0]); i++) { 
            if(length >= length[i]) { 
                gananciaMaxima = max(gananciaMaxima,precios[i] + solve_dp(tamanioBarra - length[i]));
            }
        }
        dp[lengthBarra] = gananciaMaxima;
    }
    return dp[lengthBarra];
}


int main() {
    memset(dp, -1, sizeof(dp));
    cout<<solve_dp(10)<<endl;
} 
