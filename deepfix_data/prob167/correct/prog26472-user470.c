#include<stdio.h>
int sum(long int n,int b[]){
    if(n==0){
        return 0; }
    else if(n==1){
        return b[0]; }
    else if(n<0){
        return 0; }
    else{
        return sum(n-1,b)+b[n-1]; } }
int main() {
    long int N;
    scanf("%ld",&N);
    long int a[100000];
    for(int i=0;i<N;i++){
        scanf("%ld",&a[i]); }
    int s=sum(N,*a);
    printf("%d",s);
    return 0; }