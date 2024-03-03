#include <stdio.h>
#include <stdlib.h>
int main() {
	int c,i,temp1,temp2,j,n1,n2,a[20],b[20];
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n1;i++) {
	    for(j=i+1;j<n1;j++)
	    {if(a[j]<=a[i])
	    {temp1=a[i];
	    a[i]=a[j];
	    a[j]=temp1; } } }
    for(j=0;j<n2;j++) {
        if(b[j]==a[0]) {
        printf("NO");
        return 0; } }
printf("%d",&a[0]);
	return 0; }