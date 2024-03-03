#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,A[10],sum=0,s3=0,s4=0,j,sum2=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	scanf("%d",&A[i]);
	sum=sum+A[i]; }
    for(i=0;i<n;i++){
    sum2=sum2+A[i];
    if(sum2>sum/2) break; }
    for(j=0;j<i;j++)
    s3=s3+A[j];
    for(j=i+1;j<n;j++)
    s4=s4+A[j];
    if(s3==s4)
     printf("%d %d",i+1,n-i-1);
    else if()
    printf("%d %d",i,n-i);
	return 0; }