#include <stdio.h>
int main() {
    int n,temp;
    scanf("%d\n",&n);
    int a[100];
    for(int i=0;i<n;i++) {
       scanf("%d",&a[i]); }
    int b[100];
    for(int j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    for(int i=0;i<n;i++) {
        a[i]=b[i]; }
    for(int k=0;k<n;k++) {
        for(int l=k;l<n;l++) {
            while(a[k]>a[l]) {
                a[k]=temp;
                a[k]=a[l];
                a[l]=temp; } } }
    for(int r=0;r<n;r++)
    printf("%d\t",a[r]);
       printf("end");
    return 0; }