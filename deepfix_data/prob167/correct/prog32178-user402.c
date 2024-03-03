#include<stdio.h>
int main() {
    int n,i,m,num[10^5];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    m=0;
    for(i=0;i<n;i++){
        m=m+num[i]; }
    printf("%d",m);
    return 0; }