#include<stdio.h>
int diff(int n,int N[n]) {
    if(n==1) {
        return N[0]; }
    else {
        return diff(n-2,N)-N[n-1]; } }
int main() {
    int n;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&N[i]); }
    printf("%d",diff(n,N));
    return 0; }