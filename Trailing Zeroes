//this code for decimal number only..
//To learn about another base flow the given article
int caltail(int n){
    int sum=0;
    for(int i=5;i<=n;i*=5){
        sum+=(n/i);
    }
    return sum;
}
//here I calcule only the number of 5 because the number of 5 will always less then number of 2.
//here I wish to give a code for finding minimal number for exact n Trailling zero.
//take a look on binary search..
int n;
     cin>>n;
     int low=0;
     int hight=N;
     int ans=N;
     while(low<=hight){
         int mid=(low+hight)/2;
         int r=caltail(mid);
         if(r==n){
             ans=min(mid,ans);
             hight=mid-1;
             
         }
         else if(r<n){
             low=mid+1;
         }
         else{
             hight=mid-1;
         }
     }
     if(ans==N)cout<<"impossible\n";
     else cout<<ans<<endl;
