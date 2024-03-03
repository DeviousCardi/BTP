#include<stdio.h>
int p=1;
int product(int a[],int n){
    if(n==0){
        return p; }
    p=p*a[n];
    return p*product(a,n-1); }
int main() {
    int N,i,m;
    scanf("%d\n",&N);
    int a[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]); }
    m=product(a,N);
    printf("%d",m);
    return 0; }