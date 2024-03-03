#include<stdio.h>
int sum(int n,int b[]){
    if(n==0){
        return 0; }
    else if(n==1){
        return b[0]; }
    else{
        return sum(n-1,a[])+b[n-1]; } }
int main() {
    int N;
    sanf("%d",&N);
    int a[100000];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]); }
    sum(N,a[]);
    return 0; }