#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j;
     scanf("%d",&n);
     int a[n];
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
         for(j=0;j<n;j++)
    if (j==0)
    {if (a[0]>a[1])
    {printf("Yes");} }
    if(j>0&&j<n-1)
    {if((a[j]>a[j-1])&&(a[j]>a[j+1]))
    {printf("Yes");}}
    if(j==n-1)
    {if(a[n-1]>a[n-2])
    {printf("Yes");}}
    else{printf("No");}
	return 0; }