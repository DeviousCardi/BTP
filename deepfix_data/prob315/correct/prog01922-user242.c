#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,sum=0,flag=0,i,j;
	scanf("%d",&n);
	int str[1000],str1[1000];
	for(i=0;i<n;i++){
	    scanf("%d",&a);
	    str[i]=a; }
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        if(str[i]>str[j]){
	            flag=flag+1;
	            sum=sum+1; } }
	str1[i]=flag;
	flag=0; }
	printf("%d\n",sum);
	for(i=0;i<n;i++){
	    printf("%d ",str1[i]); }
	return 0; }