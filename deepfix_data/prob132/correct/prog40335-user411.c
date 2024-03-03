#include <stdio.h>
int main() {
    int n,i,j,count=1;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=1;j<n;j++)
        if(a[i]==a[j])
        count++; }
    if(count==a[j])
    printf("Yes");
    else
    printf("No");
    return 0; }