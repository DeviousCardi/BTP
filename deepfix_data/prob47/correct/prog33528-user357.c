#include <stdio.h>
#include <stdlib.h>
long int catalan (int n );
int main() {
	int num;
	scanf("%d",&num);
	int i,a[num];
	for(i=0;i<num;i++){
	    scanf("%d",&a[i]);
	    printf("%ld\n",catalan(a[i])); }
	return 0; }
long int catalan (int n ){
    if (n==0) return 0;
    if(n==1)return 1;
    else return(((2*(float)(2*n+1)/n+1))*catalan(n-1)); }