#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,flag=1,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n-1;i++)
    {if( (a[i]<a[i-1] &&a[i]<a[i+1])  || (a[i-1]<a[i-2]  || a[1]<a[0]))                     flag=0;}
    if(flag==0)
printf("Yes");
else
printf("No");
	return 0; }