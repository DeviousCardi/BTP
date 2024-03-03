#include <stdio.h>
int sum(int k, int n, int s,int a[]) {
    if(k>n)
        return 0;
    if(s==0 || s-a[k]==0)
        return 1;
    if(sum(k+1,n,s-a[k],a)==1)
        return 1;
    else if(sum(k+1,n,s,a)==1)
        return 1;
    else
        return 0; }
int main() {
    int n,s,i;
    scanf("%d %d",&n,&s);
    int a[n+1];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    if(sum(1,n,s,a))
    printf("YES");
    else
    printf("NO");
    return 0; }