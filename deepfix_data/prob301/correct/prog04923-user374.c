#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int main() {
	int n,i,k,j,r,q=0;
	scanf("%d\n",&n);
	int ind[n];int count[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&ind[i]); }
	if(n=1)
	printf("%d",ind[0]);
	else {
	for(k=0;k<n;k++)
	{count[k]=0;
	    for(j=k+1;j<n;j++) {
	        if(ind[k]==ind[j])
	        count[k]=count[k]+1; } }
	for(q=0;q<n;q++) {
	    r=max(r,count[k]); }
	printf("%d",ind[r]); }
	return 0; }
int max(int x,int y){
    if(x>y)
    return x;
    else
    return y; }