#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l=0,p,h;
    scanf("%d",&k);
	int n[k];
	int m[k];
	int b[k];
	for(i=0;i<k;i++){
	    scanf("%d",&n[i]); }
	while(h>=1){
	for(j=0;j<k-1;j++){
	    if(n[j]==n[j+1])
	    {m[l]=n[j];
	    l=l+1;}
	    else
	    {continue;} }
	for(p=0;p<l;p++){
	    b[p]=m[p]; }
	h=l;
	l=0; }
	printf("%d",b[0]);
	return 0; }