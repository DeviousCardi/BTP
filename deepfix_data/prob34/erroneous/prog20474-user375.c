#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,t;
    scanf("%d%d",&n,&t);
	int a[n];
	for(i=0;i<n;i++)  {
	    scanf("%d",&a[i]); }
	for(j=0;j<t;j++)    {
	    int a[j];
	    scanf("%d",&a[j]); }
	for(k=0;k<t;k++)   {
	    if((c[a[k]]>c[a[k]-1])&&(c[a[k]]>c[a[k]+1]))  {
	        printf("yes"); }
	    else  {
	        printf("no"); }
	    printf("\n"); }
	return 0; }