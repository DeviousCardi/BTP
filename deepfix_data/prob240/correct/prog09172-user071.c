#include <stdio.h>
#include <stdlib.h>
int cata(n){
    if (n==0) return 1;
    else {
        return (cata(n-1))*2*(2*n-1)/(n+1); } }
int main() {
	int m,i,j,x;
	scanf("%d",&m);
	for(i=1;i<m+1;i++){
	    scanf("%d",&x);
	    for(j=0;j<50;j++){
	   if (cata(j)<x&&cata(j+1)>x)
	  printf("%d\n",cata(j-1)); } }
	return 0; }