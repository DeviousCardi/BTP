#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n) {
    if(n==0) {
        return 1; }
    else {
    return (2*(2*n+1)/(n+2)*Catalan_no(n-1)); } }
int main() {
	int i,sum=0,t;
	long int k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%ld\n",&k);
	    for(i=0;i<k;i++)
	    {sum+=Catalan_no(i);printf("%d\n",Catalan_no(i));}
	    printf("%d\n",sum);
	    if(sum==0)
	    printf("%d\n",sum); }
	return 0; }