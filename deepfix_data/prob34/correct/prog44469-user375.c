#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,t;
    scanf("%d%d",&n,&t);
	int c[n];
	for(i=0;i<n;i++)  {
	    scanf("%d",&c[i]); }
	int a[t];
	for(j=0;j<t;j++)    {
	    scanf("%d",&a[j]); }
	for(k=0;k<t;k++)   {
	    if((c[a[k]]>c[a[k]-1])&&(c[a[k]]>c[a[k]+1]))  {
	        printf("Yes"); }
	    else  {
	        printf("No"); }
	    printf("\n"); }
	return 0; }