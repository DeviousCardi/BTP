#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int i,j,k;
	k=0;
	int a[1000],b[1000];
	int str1[1000];str2[1000]
	int count=0;
	for(i=0;i<n;i++) {
	  scanf("%d",&a[i]); }
	for(j=0;j<m;j++) {
	  scanf("%d",&b[j]); }
	j=0;
	i=0;
	while(j<m) {
	 while(i<n) {
	  if(b[j]>=a[i]-x && b[j]<=a[i]+y) {
	     count=count+1;
	 str1[k]=i+1;
	 str2[k]=j+1;
	 k++
	    i++;
	    j++; }
	  else i++; }
	 j++; }
	for(k=0;k<count;k++) {
	    printf("%d %d"str1[k],str2[k]); }
	printf("%d",count);
	return 0; }