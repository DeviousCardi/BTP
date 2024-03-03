#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l=1,p;
    scanf("%d",&k);
	int n[k];
	int m[k];
	for(i=0;i<k;i++){
	    scanf("%d",&n[i]); }
	while(l>=1){
	for(j=0;j<k-1;j++){
	    if(n[j]==n[j+1])
	    {m[l-1]=n[j];printf("%d",m[l-1]);
	    l=l+1;}
	    else
	    {continue;} }
	printf("\n");
	for(p=0;p<l-1;p++){
	    n[p]=m[p]; printf("%d",n[p]);
	}printf("\n"); }
	printf("%d",n[0]);
	return 0; }