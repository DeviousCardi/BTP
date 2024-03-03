#include <stdio.h>
#include<limits.h>
int main() {
    int n,flag=0;
    scanf("%d",&n);
    int a[n],b[INT_MAX]={0};
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[a[i]]++; }
    for(i=0;i<n;i++) {
        if(b[a[i]]!=a[i]) {
            printf("No");
            flag=1;
            break; } }
    if(flag==0)
    printf("Yes");
    return 0; }