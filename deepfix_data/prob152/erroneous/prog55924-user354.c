#include <stdio.h>
int fun(int a[],int i,int n,float sum,float total)  {
    if(i<n-1&&sum==total/2)  return 1;
    else if(i==n-1&&sum!=total/2) return 0;
    else return fun(a,i+1,n,sum+a[j],total,)||fun(a,i+1,n,sum,total); }
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