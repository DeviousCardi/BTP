#include <stdio.h>
int main() {
	int n1,n2,1[20],2[20],i,j;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d",&1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
	    scanf("%d",&2[i]); }
	for(i=0;i<n1;i++){
	    for(j=0;j<n2;j++){
	        if(1[i]=2[j])
	        break; } }
	return 0; }