#include<stdio.h>
int sum(a[i]) {
    s= a[i]+sum(a[i-1]);
    if(i==0){
        return s;
        break; } }
int main() {
    int N,i,s;
    scanf("%d", &N);
    int a[N];
    if(2<=N<=100000){
    for (i=0;i<N;i++){
       scanf("%d", &a[i]); }
    p= sum(a[N])
    return 0; } }