#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k;
	int n,b[10000];
	scanf("%d",&n);
	for (i=0;i<=(n-1);i++){
	    scanf("%d",&b[i]); }
	for(i=0;i<n;i++){
	    for ((j!=i,j=0);j<n;j++){
	        if (b[i]==b[j]){
	            k=-1; }
	        else
	            k=0;
	            continue; } }
	if (k==-1)
	printf ("(b[i],b[j])");
	return 0; }