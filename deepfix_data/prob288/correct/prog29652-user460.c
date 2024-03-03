#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,s;
	scanf("%d",&n);
	for(i=1;i<=2*n+1;i++) {
	    if(i<=n+1)
	    s=n-i+1;
	    else
	    s=i-n-1;
	    printf("%d",s);
	    for(k=1;k<=s;k++)
	    printf(" ");
	    for(;k<=n+1;k++) {
	        if((i+k)%2==0)
	        printf("%c",'x');
	        else
	        printf("%c",'*'); }
	    printf("\n"); }
	return 0; }