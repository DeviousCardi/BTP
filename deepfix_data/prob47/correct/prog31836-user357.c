#include <stdio.h>
#include <stdlib.h>
long int catalan (int n );
int main() {
	int num,sum=0;
	scanf("%d",&num);
	int i,j,a[num];
	for(i=0;i<num;i++){
	    sum=0;
	    scanf("%d",&a[i]);
	    for(j=0;j<a[i];++j)
	        sum=sum+catalan(j);
	   printf("%d\n",sum); }
	return 0; }
long int catalan (int n ){
    if (n==0) return 0;
    if(n==1)return 1;
    else return(2*(2*n-1)*catalan(n-1))/(n+1); }