#include<stdio.h>
int sum(int a[],int b);
int main() {
    int N,n[100000];
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&n[i]); }
    printf("%d",sum(n[N],N));
    return 0; }
int sum(int a[],int b) {
    int c=0;
    if((b-1)==0)
    return(c);
    c=a[0]-sum(a[b-1],b-1);
    b--; }