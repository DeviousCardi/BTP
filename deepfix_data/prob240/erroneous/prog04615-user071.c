#include <stdio.h>
#include <stdlib.h>
int cata(n){
    if (n==0) return 1;
    else return cata(n-1)*(2*(2*n-1))/(n+1); }
int main() {
	int n,i,j=0,x;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
	    scanf("%d",&x);
	    {j++}
	    while(cata(j)<x);
	    printf("%d",cata(j));
	    printf("/n"); }
	return 0; }