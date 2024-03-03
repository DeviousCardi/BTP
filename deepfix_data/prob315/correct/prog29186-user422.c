#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,b,j,x;
	b=0;
	scanf("%d",&a);
	int count[a];
	int num[a];
	for(i=0;i<a;i++){
	    count[i]=0;
	    scanf("%d",&num[i]); }
	for(i=0;i<a;i++){
	    x=num[i];
	    for(j=i+1;j<a;j++)
	    count[i]=(x>num[j])? count[i]+=1:count[i]; }
	for(i=0;i<a;i++){
	    b=b+count[i]; }
	 printf("%d\n",b);
	 for(i=0;i<a;i++){
	     printf("%d ",count[i]); }
	return 0; }