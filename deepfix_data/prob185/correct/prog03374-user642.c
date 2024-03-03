#include <stdio.h>
int check(int a[],int t,int l,int n,int s) {
    if(l+1==n) return 0;
    if (t==s) return 1;
    int x=check(a,t,l+1,n,s);
 printf("%d",x);
    int y=check(a,t+a[l-1],l+1,n,s);
   printf("%d",y);
    if(x==1||y==1) return 1;
    else return 0; }
int main() {
    int i,k=0,n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    k=check(a,0,1,n,s);
    if(k==0) printf("NO");
    else printf("YES");
    return 0; }