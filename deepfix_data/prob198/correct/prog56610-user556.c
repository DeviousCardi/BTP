#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2;int i,j,f=0;
	scanf("%d",&n1);int a[n1];
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);int b[n2];
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	int t=0;
	for(i=0;i<n1-1;i++) {
	    for(j=0;j<n1-i-1;j++) {
	        if(a[j]>a[j+1]) {
	            t=a[j];a[j]=a[j+1];a[j+1]=t; } } }
	for(i=0;i<n1;i++) {
	    for(j=0;j<n2;j++) {
	        if(a[i]!=b[j])
	        f=1; }
	    if (f==1)
	    break; }
	if(f==0)
	printf("NO");
	else
	printf("%d",a[i]);
	return 0; }