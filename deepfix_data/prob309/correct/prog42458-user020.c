#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n*2];
    for(int i=0;i<(2*n)-1;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<(2*n)-1;i++) {
        printf("%d",a[2*i]); }
    return 0; }