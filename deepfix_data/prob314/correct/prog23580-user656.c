#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,indx,j;
	int s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&indx); }
	for(j=0;j<=indx;j++){
	    if(j==0)
	    printf("Yes");
	    else if((s[j]<=s[j-1])&&s[j]<=s[j+1])
	    {printf("Yes");
	    printf("\n");}
	    else
	    printf("No");
	    printf("\n"); }
	return 0; }