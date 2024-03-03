#include<stdio.h>
int product(int a[],int n){
    static int p=1;
    if(n==0){
       return a[0]; }
    return a[n]*product(a,n-1); }
int main() {
    int N,i,m;
    scanf("%d\n",&N);
    int a[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]); }
    m=product(a,N);
    printf("%d",m);
    return 0; }