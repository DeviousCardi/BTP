#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
      if (n==0)return 1;
     int i,res=0;
     for(i=0;i<n;i++)
         res=res+catalan(i)*catalan(n-1-i) ;
      return res; }
int main() {
	int n,i,j;
	int a[1000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	int sum=0;
	for(i=0;i<n;i++){
	  for(j=0;j<=a[i];j++){
	      sum=sum+catalan(j);
	      printf("%d\n",sum); } }
	return 0; }