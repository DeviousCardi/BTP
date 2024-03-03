#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, a[21], c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n-1;i++) {
        if(a[i]<a[i+1] && a[i]<a[i-1] && c==0) {
            printf("Yes");
            c++; } }
    if((a[0]<a[1] || a[n-1]<a[n-2]) && c==0) {
            printf("Yes");
            c++; }
    if(c==0)
        printf("No");
    return 0; }