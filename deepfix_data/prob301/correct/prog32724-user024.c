#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l=2,p;
    scanf("%d",&k);
	int n[k];
	int m[k];
	for(i=0;i<k;i++){
	    scanf("%d",&n[i]); }
	while(l<1){
	l=0;
	for(j=0;j<k;j++){
	    if(n[j]==n[j+1])
	    {m[l]=n[j];printf("%d",m[l]);
	    l=l+1;}
	    else
	    {continue;} }
	printf("\n");
	for(p=0;p<l;l++){
	    n[p]=m[p]; printf("%d",n[p]);
	}printf('\n'); }
	printf("%d",n[0]);
	return 0; }