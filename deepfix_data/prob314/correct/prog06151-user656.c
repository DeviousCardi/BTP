#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,indx,j,k;
	char s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&indx); }
	for(j=0;j<=indx;j++){
	    for(k=0;k<=j;k++){
	        if(s[k]<s[j])
	        printf("Yes");
	        else
	        printf("No");
	        printf("\n"); } }
	return 0; }