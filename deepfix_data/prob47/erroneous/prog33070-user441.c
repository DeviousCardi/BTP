#include <stdio.h>
#include <stdlib.h>
  int catalan(int n){
      catalan(0)==0;
    int res=0;
     for(i=0;i<=n;i++) {
         res=res+catalan(i)*catalan(n-1-i) ; }
      return res; }
int main() {
	int n,k,i;
	int a[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	int sum =0;
	for(j=0,j<n;j++){
	    sum=sum+catalan(a[j]); }
	printf("%d",sum);
	return 0; }