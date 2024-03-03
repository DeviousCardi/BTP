#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20],b[20],m,n,i,j,tmp,k,c=0;
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	scanf("%d\n",&a[i]);
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d\n",&b[i]);
	for(i=0;i<m-1;i++) {
	    for(j=0;j<m-i-1;j++) {
	        if(a[j]>=a[j+1]) {
	            tmp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=tmp; } } }
	for(i=0;i<m;i++) {
	    for(j=0;j<n;j++) {
	        if(a[i]!=b[j]) {
	            c++; } }
	    if(c==n)
	    break; }
	if(c>0)
	printf("%d",a[i]);
	else
	printf("NO");
	return 0; }