#include <stdio.h>
#include <stdlib.h>
int main()  {
    int n;
    int i;
    int count=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)    {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++)    {
        if(a[i]!=a[i+1])    {   continue;    }
        else {
            count=count+1; }
        printf("%d",count);
	return 0; }