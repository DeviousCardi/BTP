#include<stdio.h>
int sum(int n[],int k) {
    if (k==0)
    return 0;
    else
    return (sum(n,k-1)+n[k-1]); }
int main() {
    int i,k;
    scanf("%d",&k);
    int n[k];
    for(i=0;i<k;i++) {
        scanf("%d",&n[i]); }
    printf("%d",sum(n,k));
    return 0; }