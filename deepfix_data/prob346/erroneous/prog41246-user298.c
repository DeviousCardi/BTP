#include <stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for (i=0;i<n;i++) {
        k=a[i];
        for (i=0;i<n;i++)
            if (a[i]<a[j]) {
                l=a[j];
                a[i]=l;
                a[j]=k; } } }
    for (i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }