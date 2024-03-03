#include <stdio.h>
#include <stdlib.h>
float binomial(int n,int k) {
    if(n<k) return 0;
    if(n==0&&k==0) return 1;
    if(k==0) return 1;
    else return binomial(n-1,k)+binomial(n-1,k-1); }
int main(){
    int n,k,b,ans=-1;
    scanf("%d",&b);
    for(n=0;n<=20;n++) {
        for(k=0;k<=20;k++) {
            if(binomial(n,k)==b) {
                ans=1;
                break; } }
        if(binomial(n,k)==b) {
            break; } }
    if(ans==1) {
        printf("%d %d",n k); }
    return 0; }