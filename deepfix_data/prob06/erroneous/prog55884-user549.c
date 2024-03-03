#include <stdio.h>
#include <stdlib.h>
int const max = 100000;
int main() {
	int n,m,x,y,count=0;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	int arr[max][2],k=0,i,j;
	int a[max],b[max];
	for(i=0; i<n; i++)    {
	    scanf("%d ",&a[i]); }
	for(i=0; i<m; i++)   {
	    scanf("%d ",&b[i]); }
	for(i=1; i<=n; i++)   {
	    for(j=1; j<=m; j++)   {
	        if((b[j]<=a[i]+y)&&(b[j]>=a[i]-x))   {
	            count++;
	            arr[k][0]=i;
	            arr[k][1]=j;
	            for(l=0; l<j; l++)  {
	                b[l]=b[l]; }
	            for(l=j+1; l<m; l++)   {
	                b[l-1]=b[l]; }
	            k++;
	            break; }
	        else continue; } }
	printf("%d\n",count);
	for(i=0; i<k; i++)   {
	    printf("%d %d\n",arr[i][0],arr[i][1]); }
	return 0; }