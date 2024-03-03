#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j;
    scanf("%d\n",&n);
    int a[20];
    for(i=0;i<n;i++)
{    scanf("%d\n",&a[i]);}
     for(j=0;j<n;j++)
{   if((a[j]>a[j+1])&&(a[j]>a[j-1]))
     {printf("Yes\n");}
    else
    if(a[j]==a[j+1])
    {continue;}
    else
    {printf("No\n");}}
	return 0; }