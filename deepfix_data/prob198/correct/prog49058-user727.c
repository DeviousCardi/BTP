#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a,*b,n,m,i,j,temp;
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&m);
    b=(int*)calloc(m,sizeof(int));
	for(i=0;i<m;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<n-1;i++) {
	    for(j=0;j<n-1-i;j++) {
	        if(a[j]>=a[j+1]) {
	            temp=a[j+1];
	            a[j+1]=a[j];
	            a[j]=temp; } } }
	temp=0;
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(b[j]==a[i]) {
	            temp++; } }
	    if(temp==0)
	    break;
	    else if(i==n-1) {
	        printf("NO");
	        return 0; } }
	printf("%d",a[i]);
	return 0; }