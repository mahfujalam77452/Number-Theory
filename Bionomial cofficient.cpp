//Easy way

int nCr[32][32];
    nCr[0][0] = 1;
    
    for(int i = 1;i<=31;i++) {
        
        for(int j = 0; j <= 31 ; j ++) {
            
            nCr[i][j] = (j-1 >= 0?nCr[i-1][j-1]:0) + (i-1 >= 0? nCr[i-1][j] : 0);//nCr + nC(r+1) = (n+1)Cr
        }
    }


#include<bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9+7;
const int MAXN = 200000 + 5;

int fact[MAXN], invfact[MAXN];

int modpow(int a,int b){
    int ans = 1;
    
    while(b){
        if(b&1) ans = (ans*a)%MOD;
        
        a = a*a %MOD;
        
        b>>=1;
    }
    
    return ans;
}

void init(){
    fact[0]=1;
    for(int i=1;i<MAXN;i++)
        fact[i]=fact[i-1]*i%MOD;

    invfact[MAXN - 1] = modpow(fact[MAXN - 1],MOD - 2);
    
    for(int i = MAXN - 2;i>=0;i--){
        invfact[i] = (invfact[i+1] * (i + 1))%MOD;
    }
}

int nCr(int n,int r){
    if(r<0||r>n) return 0;
    return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}
int main()
{

    int t;
    
    cin>>t;
    for(int k=1;k<=t;k++){
       
        
    }
    return 0;
}
