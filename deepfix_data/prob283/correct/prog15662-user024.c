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
	for(m=0;n<=3;m++){
	    for(n=0;n<=5;n++){
	        x=a(m,n);
	        if(x==k){
	            printf("%d %d",m,n);
	 	        break;}
	        else
	            continue; }
	    if(x==k)
	    break; }
	if((n==5&&m==3)&&(x!=k))
	printf("%d",x);
	return 0; }