#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int a[100000];
	for(i=0;i<100000;i++){
	scanf("%d",&a[i]); }
	n=i;
	for(i=0;i<=n/2;i++){
	    if(a[i]==a[n-i])
	        j=1;
	    else{
	        j=0;break;} }
	if(j==1)
	    printf("YES");
	else if(j==0)
	    printf("NO");
	return 0; }