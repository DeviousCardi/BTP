#include <stdio.h>
int fun(int a[],int i,int n,float sum,float total)  {
    if(i==n/2&&sum==total/2)  return 1;
    else if(i==n/2&&sum!=total/2) return 0;
    else return fun(a,i+1,n,sum+a[i+1],total)||fun(a,i,n,sum,total); }
int main() {
    int n, a[30];
    scanf("%d",&n);
    float sum=0;
    for(int i=0;i<n;i++)  {
        scanf("%d",&a[i]);
        sum+=a[i]; }
    if(fun(a,-1,n,0,sum)==0)  printf("NO");
    else printf("YES");
    return 0; }