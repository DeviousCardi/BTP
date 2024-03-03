#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a>b){
        return a; }
    else{
        return b; } }
int main() {
    int n,m,i,j;
    scanf("%d %d\n",&n,&m);
    int a[n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("\n%d",&a[j]); } }
    return 0; }