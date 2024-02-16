#include<bits/stdc++.h>
using namespace std;
#define N 101
long long M=1000000000+7;
long long ar[3],I[3][3],T[3][3];
void mul(long long  A[][3],long long  B[][3],int dim)
{
    int res[dim+1][dim+1];
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++){
            res[i][j]=0;
            for(int k=1;k<=dim;k++){
              long long x=  ((A[i][k]%M)*(B[k][j]%M))%M;
              res[i][j]=((res[i][j]%M)+x%M)%M;
            }
        }
    }
    for(int i=1;i<=dim;i++){
        for(int j=1;j<=dim;j++){
            A[i][j]=res[i][j];
        }
    }
}
long long Get_fib(long long n)
{
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            if(i==j)I[i][j]=1;
            else I[i][j]=0;
        }
    }
    T[1][1]=0;
    T[1][2]=T[2][1]=T[2][2]=1;
    n=n-1;
    while(n){
        if(n%2){
            mul(I,T,2);
            n--;
        }
        else{
            mul(T,T,2);
            n/=2;
        }
    }
    long long Fn=(ar[1]*I[1][1]+ar[2]*I[2][1])%M;
    return Fn;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>ar[1]>>ar[2]>>n;
        n++;
        cout<<Get_fib(n)<<endl;;
        
    }
    return 0;
}
