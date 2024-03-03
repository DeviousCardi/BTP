#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[i];
	scanf("%d",&n);
	i=0;
	while(i<n){
	scanf("%d",&a[i]);
	i++; }
	if(n==1){
	      printf("Yes"); }
	 else {
	for(i=1;i<n;i++){
	     if(a[0]>a[1]){
	      printf("Yes");
	      break; }
	    else if ((a[i]>a[i-1])&&(a[i]>a[i+1]))
               {printf("Yes");break;} } }
	if(i==n&&n>1)
	{printf("No");}
	return 0; }