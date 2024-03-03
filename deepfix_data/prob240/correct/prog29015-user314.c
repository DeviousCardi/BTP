#include <stdio.h>
#include <stdlib.h>
float catalan(float x) {
    if(x==0){return 1;}
    if(x==1){return 1;}
     return (((2*(2*x-1))/(x+1))*catalan(x-1)); }
int main() {
    float i,t,k;
	scanf("%d",&t);
	i=catalan(t);
	printf("%d",i);
	return 0; }