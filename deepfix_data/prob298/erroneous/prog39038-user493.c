#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n<=1){
        return 1; }
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+catalan(i)*catalan(n-i-1); }
    return sum; }
int g[18];
for(i=0;i<18;i++){
    g[i]=catalan(i); }
int main() {
    int t;
    scanf("%d",&t);
    int k[t],i;
    for(i=0;i<t;i++){
        scanf("%d\n",&k[i]); }
    for(i=0;i<18;i++){
        printf("%d\n",g[i]); }
	return 0; }