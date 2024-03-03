#include <stdio.h>
int main(){
    int n,m;
    int k;
    int a[100];
    scanf("%d",&k);
    scanf("%d%d",&n,&m);
    for(n=1;n<=100;n=n+1){
        a[n]=n; }
    for(m=1;m<=100;m=m+1){
        a[m]=m; }
    if (a[n]+a[m]==k){
        printf("lucky"); }
    else{
        printf("unlucky"); }
    return 0; }