#include <stdio.h>
int sum(int k, int n, int s,int a[]) {
    if(k>=n)
        return 0;
    if(s==0 )
        return 1;
    if(sum(k+1,n,s-a[k],a)||sum(k+1,n,s,a))
        return 1;
    else return 0; }
int main() {
    int n,s,i;
        scanf("%d %d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(sum(0,n-1,s,a))
        printf("YES");
    else
        printf("NO");
    return 0; }