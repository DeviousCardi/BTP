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
  int t,i,n,j,k;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d\n",&k);
    for(j=0;j<k;j++){
    if(c(j)>k){
        break;} }
    printf("%d\n",c(j)); }
	return 0; }