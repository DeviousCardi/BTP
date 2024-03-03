#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,n;
	scanf("%d %d",&n1,&n2);
	char row1[n1];
	char row2[n2];
	if(n1>n2)
	n=n1;
	else
    n=n2;
	char sum[n];
	for(i=0;i<n1;i++)
	    scanf("%c",&row1[i]);
	for(i=0;i<n2;i++)
	    scanf("%c",&row2[i]); {
	    for(i=n-1;i>=0;i--) {
	        sum[i]=row1[i]+row2[i]+(sum[i+1]/10);
	        sum[i]=sum[i]%10;
	    printf("%c",'sum[i]'); } }
	return 0; }