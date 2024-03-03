#include <stdio.h>
int main() {
    int i,j,n;
    int a[i];
    scanf("%d",&n);
    scanf("%d ",&a[i]);
    int count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            count=count+1; } }
    for(i=0;i<n;i++) {
    if(count==a[i])
    printf("Yes");
    else
    printf("No"); break; }
    return 0; }