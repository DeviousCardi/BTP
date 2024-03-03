#include <stdio.h>
#include <stdlib.h>
 int c( int n){
    if(n==0){
        return 1; }
    else if(n==1){
        return 1; }
    else
    return ((float)(2*(2*n-1))/(n+1))*c(n-1); }
  int main() {
  int t,i,k;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d\n",&k);
    if(k>=-1){
    printf("%d\n",c(k+1));}
    else
    printf("0"); }
	return 0; }