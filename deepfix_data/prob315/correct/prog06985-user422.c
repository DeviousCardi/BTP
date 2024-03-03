#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,b;
	b=0;
	scanf("%d",&a);
	int count[a];
	int num[a];
	for(i=0;i<a;i++){
	     count[i]=0;
	    count[i]=(num[i]>num[i+1])? count[i]+=1:count[i]; }
	for(i=0;i<a;i++){
	    b=b+count[i]; }
	 printf("%d\n",b);
	 for(i=0;i<a;i++){
	     printf("%d ",count[i]); }
	return 0; }