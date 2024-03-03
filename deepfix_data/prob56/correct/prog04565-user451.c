#include <stdio.h>
#include <stdlib.h>
 int c( int n){
    if(n==0){
        return 1; }
    else if(n==1){
        return 1; }
    else
    return ((float)2*((2*n-1)/(float)(n+1)))*c(n-1); }
 int main() {
    int t,a,b,k;
    scanf("%d",&t);
    for(a=0;a<t;a++){
    scanf("%d\n",&k);
    for(b=0;b<=k;b++){
    if(c(b)>k){
        break;} }
    printf("%d\n",c(b)); }
	return 0; }