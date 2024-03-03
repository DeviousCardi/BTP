#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l,p;
    scanf("%d",&k);
	int n[k];
	int m[100000000];
	for(i=0;i<k;i++){
	    scanf("%d",&n[i]); }
	while(l<1){
	l=0;
	for(j=0;j<k;j++){
	    if(n[j]==n[j+1])
	    {m[l]=n[j];
	    l=l+1;}
	    else
	    {continue;} }
	for(p=0;p<l;l++){
	    n[p]=m[p]; } }
	printf("%d",n[0]);
	return 0; }