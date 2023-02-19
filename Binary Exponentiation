//In simple word binary exponentiation is the teqnique to calculate a^n 
//with O(log(n)) time complexity.Here the function....
int power(int a,int n){
    int res=1;
    while(n){
        if(n%2){
           res*=a;
           n--;
        }
        else{
            a*=a;
            n/=2;
        }
    }
    return res;
}
//Modular exponentiation.
int power(int a,int n,int p){
    int res=1;
    while(n){
        if(n%2){
           res=(res*a)%p;
           n--;
        }
        else{
            a=(a*a)%p;
            n/=2;
        }
    }
    return res;
}
