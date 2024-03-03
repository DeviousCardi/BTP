#include <stdio.h>
int kumar(int N,int S,int a[]) {
    a[N-1]=a[N-1]+a[N-2];
    if(S==a[N-1])
    return 1;
    if (N==1)
    return 0;
    else return kumar(N-1,S,a); }
int main() {
    int i,N,a[1000],S,x;
    scanf("%d %d",&N,&S);
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    x=kumar(N,S,a);
    if(x==1) {
        printf("YES"); }
    if(x==0) {
        printf("NO"); }
    return 0; }