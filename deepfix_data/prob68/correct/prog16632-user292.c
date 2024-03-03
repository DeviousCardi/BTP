#include<stdio.h>
void prod(int N[],int n,long p) {
    if(n<0) {
        printf("%d",p);
        return; }
    p=p*N[n];
    prod(N,n-1,p); }
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int N[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&N[i]); }
    long p=1;
    prod(N,n-1,p);
    return 0; }