#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],max=0;
    for(int i=0;i<=n-1;i++) {
        scanf("%d",&a[i]); }
    for(int j=0;j<=n-1;j++) {
        if(max<a[j])
        max=a[j]; }
    int min=max;
    for(int k=0;k<=n-1;k++) {
        if(min>a[k])
        min=a[k]; }
    printf("%d %d",max,min);
    printf("end");
    return 0; }