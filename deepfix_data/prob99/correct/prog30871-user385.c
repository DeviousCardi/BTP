#include <stdio.h>
int main() {
    int n,i,j,k=0,p=0;
    scanf("%d\n",&n);
   long int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%ld ",&a[i]); }
    for(i=0;i<n;i++) {
        k=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                a[i]=a[j];
                k++; } }
        b[p]=k+1;
        p++; }
    int m=b[0];
    for(i=1;i<n;i++) {
        if(m<b[i]) {
            m=b[i]; } }
    printf("%d",m);
    return 0; }