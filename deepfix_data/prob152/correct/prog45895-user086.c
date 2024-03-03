#include <stdio.h>
int sum2(int a[],int n) {
    if(n==1)
    return a[0];
    return a[n-1]+sum2(a,n-1); }
void recurse(int a[],int start,int n,int sum) {
    if(n==1) {
        printf("NO");
        return ; }
    if(sum==a[start]) {
        printf("YES");
        return ; }
    sum=sum-a[start];
    recurse(a,start+1,n-1,sum); }
int main() {
    int  sum=0;
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sum=sum2(a,n);
    printf("%d ",sum);
recurse(a,0,n,sum);
    return 0; }