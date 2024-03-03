#include<stdio.h>
long long int pro(int a[],int n,int start,int end) {
    if(n==1)
    return a[n-1];
    else if(a[start]==0)
    return 0;
    else if(start==end)
    return a[start];
    else
    return a[start]*pro(a,n,start+1,end); }
int main() {
     long int n,i;
    scanf("%ld\n",&n);
   int a[n+1];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%ld",pro(a,n,0,n-1));
    return 0; }