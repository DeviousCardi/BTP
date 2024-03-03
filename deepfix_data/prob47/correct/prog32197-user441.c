#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
      if (n==0)return 1;
     int i,res=0;
     for(i=0;i<n;i++)
         res=res+catalan(i)*catalan(n-1-i) ;
      return res; }
int main() {
	int n,i=0,j;
	int a[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	int sum =0;
	for(j=0;j<a[i];j++){
	    sum=sum+catalan(j);
	   i=i+1;
	printf("%d\n",sum); }
	return 0; }