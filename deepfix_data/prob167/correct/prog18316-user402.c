#include<stdio.h>
int main() {
    int N,i,m,num[10^5];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&num[i]); }
    m=0;
    for(i=0;i<N;i++){
        m=m+num[i]; }
    printf("%d",m);
    return 0; }