#include <stdio.h>
int check(int n,long int arr[],long int t,int i,long int sum){
    if(i==n+1)
        return(sum==t);
    return check(n,arr,t,i+1,sum+arr[i])||  check(n,arr,t,i+1,sum); }
int main() {
   int n;
   long int t;
   scanf("%d%ld",&n,&t);
   long int arr[n];
   int x=check(n,arr, t,0,0);
    if(x)
        printf("YES");
    else
        printf("NO");
    return 0; }