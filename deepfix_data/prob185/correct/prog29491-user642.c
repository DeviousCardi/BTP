#include <stdio.h>
int check(int a[],int t,int l,int n,int s) {
    if(l==n) return 0;
    if (t==s) return 1;
    int x=check(a,t,l+1,n,s);
    int y=check(a,t+a[l],l+1,n,s);
    if(x==1||y==1) return 1;
    else return 0; }
int main() {
    int i,k=0,n,s;
    scanf("%d %d",&n,&s);
    int a[n+1];
    n++;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        a[n]=0;
    k=check(a,0,0,n,s);
    if(k==0) printf("NO");
    else printf("YES");
    return 0; }