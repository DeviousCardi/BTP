#include <stdio.h>
int check(int a[],int t,int l,int n,int s) {
    if(l==n) return 0;
    if (t==s/2) return 1;
    int x=check(a,t,l+1,n,s);
    int y=check(a,t+a[l],l+1,n,s);
    if(x==1||y==1) return 1; }
int main() {
    int i,k,n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0; }