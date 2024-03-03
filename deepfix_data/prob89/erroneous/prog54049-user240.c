#include <stdio.h>
int main(){
    int k,n,i,j;
    int z=0;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i=i+1) {
        for(j=i+1;j<n;j=j+1) {
            if(i+j=k) {
                printf("lucky") }
            else {
                z=z+1 } } }
    if(z=(n-1)*n/2) {
        printf("unlucky")
    };
    return 0; }