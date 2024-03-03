#include <stdio.h>
#include <stdlib.h>
int main() {
		int v=0,n=0,i,j,e=0;
	        scanf("%d",&n);
	int a[n];
	    for(i=0;i<(n);i++){
	        scanf("%d", &a[i]); }
	    if (a[0]>a[1])||(a[n]>a[n-1])
	        v=1;
	   for(j=1;j<(n-1),j++){
	       if (a[j]>a[j-1])&&(a[j]>a[j+1])
	        v=1; }
	   if(v=1) printf("Yes");
	   else printf("No");
	return 0; }