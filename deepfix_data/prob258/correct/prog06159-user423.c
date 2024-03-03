#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
     scanf("%d",&n);
     int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(((a[i]>a[i-1])&&(a[i]>a[i+1]))||(a[0]>a[1])||(a[n-1]>a[n-2]))
    {printf("Yes");}
    else{printf("No");}
	return 0; }