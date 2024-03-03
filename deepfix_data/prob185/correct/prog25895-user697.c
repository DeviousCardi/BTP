#include <stdio.h>
int n,s,k=0,q=0;
int check(int a[],int i,int n,int t,int s){
    if(t!=s&&i==n)
    return 0;
    if(t==s)
    return 1;
     return (check(a,i+1,n,t,s)||check(a,i+1,n,t+a[i],s)); }
int main() {
    scanf("%d %d",&n,&s);
    int a[1000]={0};
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    k=check(a,0,n,0,s);
    if(k==1)
    printf("YES");
    else
    printf("NO");
    return 0; }