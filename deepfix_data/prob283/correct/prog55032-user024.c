#include <stdio.h>
#include <stdlib.h>
int a(m,n){
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return a(m-1,1);
    if(m>0&&n>0)
    return a(m-1,a(m,n-1)); }
int main() {
	int x=-1;
	int k,n,m;
	scanf("%d",&k);
	for(n=0;n<=5;n++){
	    for(m=0;m<=3;m++){
	        x=a(m,n);
	        if(x==k){
	            printf("%d %d",m,n);
	 	        break;}
	        else
	            continue; } }
	if((n==5&&m==3)&&(x<0))
	printf("%d",x);
	return 0; }