#include <stdio.h>
int main() {
    int n,i,j,k,t,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    for(i=0;i<n;i++) {
            j=b[i];
            a[i]=a[j];
       printf("%d ",a[i]); }
    printf("end");
    return 0; }