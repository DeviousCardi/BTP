#include<stdio.h>
int sum(int a[], int n, int s){
    if (n==1){
            return(s+a[n-1]); }
    s=s+a[n];
    return(a[n],n-1,s); }
int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
            scanf("%d",&a[i]); }
    int s=sum(a[N],N,0);
    return 0; }