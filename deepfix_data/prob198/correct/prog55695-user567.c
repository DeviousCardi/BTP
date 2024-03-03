#include <stdio.h>
#include <stdlib.h>
int min(int a[],int n1) {
    int	j,m=a[0],k=0;
	for(j=1;j<n1;j++) {
	    if(m>a[j]) {
	        m=a[j];
	        k=j; } }
	return k; }
int max(int a[],int n1) {
    int	j,m=a[0],k=0;
	for(j=1;j<n1;j++) {
	    if(m<a[j]) {
	        m=a[j];
	        k=j; } }
	return k; }
int main() {
	int n1,n2,i,j,k,l,m;
	scanf("%d",&n1);
	int a1[n1];
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	int a2[n2];
	for(i=0;i<n1;i++) {
	    scanf("%d",&a2[i]); }
	printf("hi");
	int flag;
	printf("%d",a1[max(a1,n1)]);
	return 0; }