#include<stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[2*n],b[n];
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if (a[i]==a[j]) {
                b[i]=j-i;
                break; } } }
    for (i=n-1;i>0;i--) {
        if (b[i]<b[i-1]) {
            j=b[i];
            b[i]=b[i-1];
            b[i-1]=j; } }
    printf("%d",b[0]); }