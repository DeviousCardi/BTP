#include <stdio.h>
int main(){
    int n,k=0,i,j;
    scanf("%d",&n);
    int a[2*n],b[n];
    for(i=0;i<2*n;i++) {
        scanf(" %d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<2*n;j++) {
            if(a[i]==a[j]&&i!=j) {
                break; }
        k=k+1; }
        b[i]=k;
        printf(" %d",b[i]);
        k=0; }
    for(i=0;i<n;i++) {
        if(b[i+1]>b[i]) {
            b[i+1]=b[i]; } }
    return 0; }