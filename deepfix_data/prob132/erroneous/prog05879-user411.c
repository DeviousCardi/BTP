#include <stdio.h>
int main() {
    int n,i;
    int a[100];
    scanf("%d",&n);
    int k=(2*n)-1;
    for(i=0;i<k;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<k;i++) {
        for(j=1;j<i-1;j++)
        if(a[i]==a[j])
        count++; }
    if(count==a[i])
    printf("Yes");
    else
    printf("No");
    return 0; }