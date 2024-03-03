#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int n,m,x,y;
	int *a,*b,count=0,output_arr[20000],i,j,count1=0;
	scanf("%Ld%Ld%Ld%Ld",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	   scanf("%d",a+i);
	for(i=0;i<m;i++)
	   scanf("%d",b+i);
	for(i=0;i<m;i++) {
	    for(j=count1;j<n;j++) {
	        if(b[i]>=(a[j]-x) && b[i]<=(a[j]+y)) {
	              output_arr[2*count]=j+1;
	              output_arr[2*count+1]=i+1;
	              count++;
	              count1=j+1;
	              break; } } }
	printf("%d\n",count);
	for(i=0;i<count;i++) {
	    printf("%d %d\n",output_arr[2*i],output_arr[2*i+1]); }
	return 0; }