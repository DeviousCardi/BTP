#include <stdio.h>
int main() {
    int n,i,j,sum=0,y=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d,",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            sum=sum+1; }
        if(sum==a[i])
        y=y+1;
        else {
            printf("No");
            break; }
        sum=0; }
    if(y==n)
    printf("Yes");
    return 0; }