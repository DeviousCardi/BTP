#include <stdio.h>
int main(){
    int n,i,j=0,k,l;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for (i=0;i<n;i++) {
        k=a[i];
        for (j=0;j<n;j++) {
            if (a[i]<a[j]) {
                l=a[j];
                a[j]=k;
                a[i]=l; } } }
    for (i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }