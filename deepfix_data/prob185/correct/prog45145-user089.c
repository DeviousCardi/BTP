#include <stdio.h>
int check(long int a[],int n,int sum) {
    if(sum==0) return 1;
    if((sum!=0)&&(n==0)) return 0;
    if(a[n-1]>sum) return check(a,n-1,sum);
    return (check(a,n-1,sum)||check(a,n-1,sum-a[n-1])); }
int main() {
    char n[30];
    int l,m,j,k;
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%s",n);
    printf("%s",n);
    return 0; }