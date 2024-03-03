#include <stdio.h>
int main() {
    int sum1=0,n,k=0,sum=0;
    scanf("%d",&n);
    int a[n],max;
    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]);
        sum1=sum1+a[i]; }
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            k=k+i; }
        sum=sum+k; }
    if(sum1==sum) {
        printf("Yes"); }
    else
    printf("No");
    return 0;