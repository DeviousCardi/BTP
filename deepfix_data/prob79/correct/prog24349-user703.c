#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t[100000],i,alice=0,bob=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&t[i]);
	    sum=sum+t[i]; }
	i=0;int j=n-1;
	while(!(j<=i)){
	      t[i]=t[i]-1;t[j]=t[j]-1;
	      if(t[i]==0){alice++;i++;}
	      if(t[j]==0){bob++;j--;} }
	if(t[i-1]!=0)alice++;
	if(t[j]!=0)bob++;
	printf("%d %d",alice,bob);
	return 0; }