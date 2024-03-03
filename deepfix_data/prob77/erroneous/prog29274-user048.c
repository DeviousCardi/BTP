#include <stdio.h>
int main() {
    int n, a[1001],i,min,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    min=a[1],max=a[1];
    for(i=1;i<=n,i++) {
        if(a[i]<min) {
            min=a[i]; }
        if(a[i]>max) {
            max=a[i]; } }
    printf("%d %d",max,min);
    printf("end");
    return 0; }