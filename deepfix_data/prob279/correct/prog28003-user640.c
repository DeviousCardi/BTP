#include <stdio.h>
int main() {
    int n,i,j,sum=0,sum1,flag;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i]; }
    sum1=n*(n+1)/2;
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (a[i]==a[j]) {
                printf("%d %d",i,j);
                flag=0;
                break; } }
        printf("%d ", flag);
        if (flag==0)
        break; }
    printf("%d %d",i,j);
    return 0; }