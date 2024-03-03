#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[20];
    char b[20];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%c ",&b[i]);
        printf("%d ",a[i]); }
    return 0; }