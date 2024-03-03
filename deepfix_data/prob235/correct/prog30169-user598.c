#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,t;
	scanf("%d",&n);
	i=1;
	while(i<=((n+1)/2)){
	    j=1;
	    while(j<=n){
	    if((j<=((n-i)/2))||(j>=(((n+i)/2.0)+1)))
	    {printf(" ");}
	    else
	    {t=(j%10);
	    printf("%d",t);}
	    j=j+1;}
	    printf("\n");
	   i=i+1; }
	return 0; }