#include <stdio.h>
int main() {
    int m,n,i;
    int sum=0;
    scanf("%d%d",&m,&n);
    if(n==1) {
        if(m==0) {
            printf("YES"); }
        else
        printf("NO"); }
    if(n!=1) {
    for(i=1;i<=n;i++) {
        if(n%i==0) {
            sum=sum+1; } }
    if((sum-2)==m) {
        printf("YES"); }
    else
    printf("NO"); }
    return 0; }