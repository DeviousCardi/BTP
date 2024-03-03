#include <stdio.h>
int check(int n,long long int arr[],long long int t,int i,long long int sum){
    if(i==n+1)
        return(sum==t);
    return check(n,arr,t,i+1,sum+arr[i])||  check(n,arr,t,i+1,sum); }
int main() {
   int n;
   long long int t;
   scanf("%d%lld",&n,&t);
   long long int arr[n];
   int y=0;
   for(;y<n;y++)
        scanf("%lld",&arr[y]);
   int x=check(n,arr, t,0,0);
    if(x)
        printf("YES");
    else
        printf("NO");
    return 0; }