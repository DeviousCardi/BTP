#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k;
	int n,s,c,b[10000];
	scanf("%d",&n);
	for (i=0;i<=(n-1);i++){
	    scanf("%d",&b[i]); }
	scanf("%d",&s);
	for(i=0,j=0;i<n ,j<n;i++,j++){
	        c=b[i]+b[j] ;
	        if (s==c){
	            k=-1; }
	        else
	            continue; }
	if (k==-1)
	    printf ("(%d,%d)\n",b[i],b[j]);
	return 0; }