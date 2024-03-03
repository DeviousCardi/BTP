#include <stdio.h>
int check(int a[],int i,int n,int sum,int k) {
    if(sum==k)
    return 1;
    if(sum!=k&&i==n-1)
    return 0;
    return check(a,i+1,n,sum,k)||check(a,i+1,n,sum+a[i+1],k); }
int main() {
    int n,sum;
    scanf("%d%d",&n,&sum);
    int set[n];
    for(int i=0;i<n;i++)
    scanf("%d",&set[i]);
    if (check(set,0,n,0,sum) ==0)
        printf("NO");
    else
        printf("YES");
    return 0; }