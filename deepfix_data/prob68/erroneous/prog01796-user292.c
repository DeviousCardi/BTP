#include<stdio.h>
void prod(int N[],int n,int p) {
    if(n<0) {
        printf("%d",p);
        return; }
    prod(N,n-1,p*N[n]); }
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int N[n];
    for(i=0;i,n;i++) {
        scanf("%d",&N[i]); }
    int p=1;
    prod(N,n-1,p); }
    return 0; }