#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,a[1000],i,k,p,count,sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(k=0;k<N;k++){
	    count=0;
	    for(p=k+1;p<N;p++){
	    if(a[k]>a[p])
	    count=count+1;
	    sum=sum+count; }
	    printf("%d ",count); }
	return 0; }