#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,i,j,a[99],b[99],c[99],d[99],count=0,k=0;
	scanf("%ld ",&n);
	scanf("%ld ",&m);
	scanf("%ld ",&x);
	scanf("%ld\n",&y);
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
	for(j=0;j<m;j++)
	scanf("%ld ",&b[j]);
	for(j=0;j<m;){
	     i=0;
	            if((a[i]-x<=b[j]&&b[j]<=a[i]+y)){
	        count=count+1;
	        c[k]=i+1;
	        d[k]=j+1;
	        k++;
	        i++;
	        j++; }
        else if(a[i]-x>b[j])
        j++;
        else if(b[j]>a[i]+y)
        i++; }
	printf("%ld\n",count);
	for(i=0;i<count;i++){
	printf("%ld %ld",c[i],d[i]);
	printf("\n"); }
	return 0; }