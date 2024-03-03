#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
int main() {
	int n,i,f=0,m,ans=0,p,temp;
	scanf("%d",&n);
	temp=n;
	for(i=1;i<=temp;i++)  {
	    if((temp/10)>0) {
	        temp=temp/10;
	        f++; } }
	m=f+1 ;
	for(i=1;i<m;i++){
	    temp2 =n ;
	    p=temp2%10 ;
	    temp2=temp2/10;
	   ans=ans+ p*pow(10,m-i); }
	ans= ans+temp2;
	printf("%d",ans);
	if (n==ans){
	    printf("YES"); }
	else
	printf ("NO");
	return 0; }