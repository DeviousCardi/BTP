#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,k;
	for(i=n;i>0;i--)
	{  static int j=0;
	   j=j+1;
	    int l=i;
	    for(k=i;k<=n+j;k++) {
	        if(l==i){
	        for(l=i;l>1;l--){
	            printf(" ");
	        }}
	            printf("%d",k%10); }
	    printf("\n"); }
	return 0; }