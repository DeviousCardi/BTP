#include <stdio.h>
int main() {
    int a[1000],n,max=0,min=0,z=a[0],k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        if(a[i]>z) {
            max=i;
            z=a[i]; } }
    z=a[0];
    for(i=0;i<n;i++) {
        if(a[i]<z) {
            min=i;
            z=a[i]; } }
    k=a[max];
    a[max]=a[min];
    a[min]=k;
    for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    printf("end");
    return 0; }