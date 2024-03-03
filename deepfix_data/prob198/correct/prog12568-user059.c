#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20],b[20],m,n,i,j,c=0,p=100,tmp;
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	scanf("%d\n",&a[i]);
	scanf("%d\n",&n);
	for(j=0;j<n;j++)
	scanf("%d\n",&b[j]);
	for(i=0;i<m;i++) {
	    for(j=0;j<m-i-1;j++)
	    if(a[j]>a[j+1]) {
	        tmp=a[j];
	        a[j]=a[j+1];
	        a[j+1]=tmp; } }
	for(i=0;i<m;i++) {
	    for(j=0;j<n;j++) {
	        if(a[i]!=b[j] && a[i]<p)
	       { p=a[i];
	        c++;} } }
	if(c>0)
	printf("%d",p);
	else
	printf("NO");
	return 0; }