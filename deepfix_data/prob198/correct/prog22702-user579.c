#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,temp,j,n1,n2,a[20],b[20];
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",b[i]);
	for(i=0;i<n1;i++) {
	    for(j=i+1;j<n1;j++)
	    {if(a[j]<a[i])
	    {temp=a[i];
	    a[i]=a[j];
	    a[j]=temp; } } }
for(i=0;i<n1;i++) {
	    for(j=0;j<n2;j++)
	    {if(a[i]!=b[j])
	    {printf("%d",a[i]);
	    return 0; } } }
	printf("NO");
	return 0; }