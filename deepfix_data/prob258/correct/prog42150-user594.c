#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[i];
	scanf("%d",&n);
	i=0;
	while(i<n){
	scanf("%d",&a[i]);
	i++; }
	if(n==1)
	      printf("Yes");
	for(i=1;i<n;i++){
	     if(a[0]>a[1])
	      printf("Yes");
	    else if ((a[i]>a[i-1])&&(a[i]>a[i+1]))
               {printf("Yes");break;} }
	if(i==n)
	{printf("No");}
	return 0; }