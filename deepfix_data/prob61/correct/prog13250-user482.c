#include<stdio.h>
int main() {
    int N=0;
    int K=0;
    scanf("%d%d",&N,&K);
    int a[N];
    for(int i=0;i<N;i++) {
        a[i]=0;
        scanf("%d",&a[i]); }
    for(int i=0;i<N;i++) {
    printf("%d ",a[i]); } }