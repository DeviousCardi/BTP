#include <stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d",&n);
     int a[n];
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        a[i]=i+1; }
    while(n%2==0) {
        if(k==(a[n]+a[n-1]))
        printf("lucky");
        else
        printf("unlucky"); }
    while(n%2!=0) {
        if(k==(a[n-2]+a[n-1]))
        printf("lucky");
        else
        printf("unlucky"); }
    return 0; }