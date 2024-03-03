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
	    int r=0;
	            if((a[r]-x<=b[j]&&b[j]<=a[r]+y)){
	        count=count+1;
	        c[k]=j+1;
	        d[k]=r+1;
	        k++;
	        r++;
	        j++; }
        else if(a[r]-x>b[j])
        j++;
        else if(b[j]>a[i]+y)
        r++; }
	printf("%ld\n",count);
	for(i=0;i<count;i++){
	printf("%ld %ld",c[i],d[i]);
	printf("\n"); }
	return 0; }