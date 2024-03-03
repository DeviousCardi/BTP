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
	for(i=0;i<n;i++) {
	    for(j=i;j<n-i;j++) {
	        if(a[j]>=a[j+1]) {
	            temp=a[j+1];
	            a[j+1]=a[j];
	            a[j]=temp; } } }
	j=0;temp=0
	for(i=0;i<m;i++) {
	    if(a[j]==b[i]) {
	        j++;i=0;temp=0; }
	    else
	    temp++; }
	if(temp==m)
	printf("%d",a[j]);
	else
	printf("NO");
	return 0; }