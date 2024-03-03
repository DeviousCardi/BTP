#include <stdio.h>
#include <stdlib.h>
int main() {
	int n=0,i,j=1,l=0;
	int a[10000];
	scanf("%d",&a[0]);
	i=0;
	while((a[i]<=9)&&(a[i]>=0)){
	    	i++;
	scanf("%d",&a[i]); }
	n=(i/2)+1;
	for(l=0;l<=n;l++){
	    if(a[l]==a[n-l]){
	        j=1;}
	    else{
	        j=0;break;} }
	if(j==1)
	    printf("YES");
	else if(j==0)
	    printf("NO");
	return 0; }