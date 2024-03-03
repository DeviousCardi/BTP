#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k;
	int n,s,b[10000];
	scanf("%d",&n);
	for (i=0;i<=(n-1);i++){
	    scanf("%d",&b[i]); }
	scanf("%d",&s);
	for(i=0,j=0;i<n ,j<n;i++,j++){
	        s=b[i]+b[j] ;
	        if (s==(b[i]+b[j])){
	            k=-1;
	            continue; }
	        else
	            continue; }
	if (k==-1)
	    printf ("(%d,%d)",b[i],b[j]);
	else
	    printf ("");
	return 0; }