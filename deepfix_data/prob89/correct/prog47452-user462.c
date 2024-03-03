#include <stdio.h>
int main(){
    int n;
    int k;
    int a[100];
    scanf("%d",&k);
    scanf("%d",&n);
    for(n=1;n<=100;n=n+1){
        k%2!=0;
        a[n]=n; }
    if (a[n]+a[n]==k){
        printf("lucky"); }
    else{
        printf("unlucky"); }
    return 0; }