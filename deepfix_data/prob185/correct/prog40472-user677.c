#include <stdio.h>
int check(long a[],int n,long sum) {
    if(n<1) {
        printf("NO");
        return 0; }
    if(sum==0) {
        printf("YES");
        return 0; }
    else {
        if(a[n-1]>sum) {
            return check(a,n-1,sum); }
        else {
            sum=sum-a[n-1];
            return check(a,n-1,sum); } } }
int main() {
    long sum,a[50];
    int n,i,j;
    scanf("%d%ld",&n,&sum);
    for(i=0;i<n;i++)
      scanf("%ld",a[i]);
    check(a,n,sum);
    return 0; }