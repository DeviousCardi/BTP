#include <stdio.h>
int check(long int a[],int n,int sum) {
    if(sum==0) return 1;
    if((sum!=0)&&(n==0))
    return 0;
    if(a[n-1]>sum)
    return check(a,n-1,sum);
    return (check(a,n-1,sum)||check(a,n-1,sum-a[n-1])); }
int main() {
    long int n[30];
    int l,m,j=0,k;
    scanf("%d",&l);
    scanf("%d",&m);
    for(j=0;j<30;j++) {
        scanf("%ld",&n[j]);
        k=j; }
    if((check(n,k,l)&&check(n,k,m))==1)
    printf("YES");
    else
    printf("NO");
    return 0; }