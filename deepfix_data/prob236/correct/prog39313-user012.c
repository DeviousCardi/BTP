#include <stdio.h>
int main() {
    int n,temp;
    scanf("%d\n",&n);
    int a[100],i;
    for( i=0;i<n;i++) {
       scanf("%d",&a[i]); }
    int b[100];
    for(int j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    for(int k=0;k<n;k++) {
        for(int l=k;l<n;l++) {
            while(b[k]>b[l]) {
                temp=b[k];
                b[k]=b[l];
                b[l]=temp; } } }
    for(int r=0;r<n;r++)
    printf("%d ",a[b[r]]);
       printf("end");
    return 0; }