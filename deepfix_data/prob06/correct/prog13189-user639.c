#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,i,j=0,a[10],b[10],c[99],d[99],count=0,k=0;
	scanf("%ld ",&n);
	scanf("%ld ",&m);
	scanf("%ld ",&x);
	scanf("%ld\n",&y);
	for(i=0;i<n;i++)
	scanf("%ld ",&a[i]);
	for(i=0;i<m;i++)
	scanf("%ld ",&b[i]);
	for(i=0;i<m;){
	            if((a[j]-x<=b[i]&&b[i]<=a[j]+y)){
	        c[k]=j+1;
	        d[k]=i+1;
	        k++;
	        i++;
	        j++;
	        count++; }
        else if(a[j]-x>b[i])
        i++;
        else if(b[i]>a[i]+y)
        j++; }
	printf("%ld\n",count);
	for(i=0;i<count;i++){
	printf("%ld %ld",c[i],d[i]);
	printf("\n"); }
	return 0; }