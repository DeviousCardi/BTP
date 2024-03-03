#include <stdio.h>
int main(){
    int n;
    int k%2!=0;
    int a[100];
    scanf("%d",&k);
    scanf("%d",&n);
    for(n=1;n<=100;n=n+1){
        a[n]=n+1; }
    if (a[n]+a[n]==k){
        printf("lucky"); }
    else{
        printf("unlucky"); }
    return 0; }