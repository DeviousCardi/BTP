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
	j=0;temp=0;
	for(i=0;i<m;i++) {
	    if(a[j]==b[i]) {
	        if(j==n-1) {
	            printf("NO");
	            return 0; }
	        printf("%d\n",j);
	        j++;i=0; } }
	printf("%d",a[j]);
	return 0; }