#include <stdio.h>
int main() {
    int n,temp;
    scanf("%d\n",&n);
    int a[100],i;
    int s[100];
    for( i=0;i<n;i++) {
       scanf("%d",&a[i]); }
    int b[100];
    for(int j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    for(int m=0;m<n;m++) {
        s[m]=a[m];
        a[m]=b[m]; }
    for(int k=0;k<n;k++) {
        for(int l=k;l<n;l++) {
            while(a[k]>a[l]) {
                temp=b[k];
                a[k]=a[l];
                a[l]=temp; } } }
    for(int r=0;r<n;r++)
    printf("%d ",s[a[r]]);
       printf("end");
    return 0; }