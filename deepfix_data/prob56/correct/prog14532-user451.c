#include <stdio.h>
#include <stdlib.h>
 int c(int n){
    if(n==0){
        return 1; }
    else if(n==1){
        return 1; }
    return ((2*n+2)*(2*n+1))/((n+1)*(n+2)*c(n-1)); }
int main() {
int t,i,k;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d\n",&k);
    c(k);
    if(k>=0){
    printf("%d\n",c(k+1));}
    else printf("0"); }
	return 0; }