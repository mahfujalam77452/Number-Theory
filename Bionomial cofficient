#include<bits/stdc++.h>
using namespace std;
const long long M=1000003;
long long arr[1000000+5];

long long modInverse(long long A,long long M)
{
   long long m0 = M;
   long long y = 0, x = 1;
 
    if (M == 1)
        return 0;
 
    while (A > 1) {
        long long q = A / M;
        long long t = M;
        M = A % M, A = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
 
    return x;
}
 
int main()
{
//This code is to compute nCr with Modulo M;
    arr[0]=1;
    for(int i=1;i<=1000003;i++)arr[i]=((i%M)*(arr[i-1]%M))%M;
    int t;
    
    cin>>t;
    for(int k=1;k<=t;k++){
        cout<<"Case "<<k<<": ";
        long long n,r;
        cin>>n>>r;
        long long x=arr[n];
        long long y=((arr[n-r]%M)*(arr[r]%M))%M;
        y=modInverse(y,M);
        long long ans=((x%M)*(y%M))%M;
        cout<<ans<<endl;
        
    }
    return 0;
}
