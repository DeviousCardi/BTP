#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
     return 1;
    else
    return 2*(2*n-1)/(n+1)*(cat(n-1)); }
int main(){
    int test;
    scanf("%d\n",&test);
    int k,sum=0,a[test];
    for(k=0;k<test;k++) {
        scanf("%d\n",&a[k]); }
    for(k=0;k<test;k++) {
      sum=sum+cat(a[k]);
      printf("%d",sum); }
	return 0; }