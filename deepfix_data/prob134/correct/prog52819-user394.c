#include <stdio.h>
#include <stdlib.h>
int long long binomial(int n,int k){
    if(n<k){return 0;}
    else if(n==0&&k==0){return 1;}
    else if(k==0){return 1;}
    else return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
    int long long i,j,ans;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            ans=binomial(i,j);
            printf("%lld ",ans); }
        printf("\n"); }
	return 0; }