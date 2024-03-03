#include <stdio.h>
#include <stdlib.h>
int acker(int m,int n){
    if(m==0) return n+1;
    if(m>0 && n==0) return acker(m-1,1);
    if(m>0 && n>0) return acker(m-1,acker(m,n-1));
    else return -1; }
int main() {
	int k,m,n,i,j,l=0,p;
	scanf("%d",&k);
	for(m=0;m<4;m++){
	    for(n=0;n<6;n++){
	        if(k==acker(m,n)){
	            i=m,j=n;
	            l=1; } } }
	if(l==0) printf("-1");
	printf("%d %d",i,j);
	return 0; }