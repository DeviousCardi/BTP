#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
     scanf("%d",&n);
     int a[n];
     i=0;
     while(i<n){
         scanf("%d",&a[i]);
         i++; }
    for(i=0;i<n;i++)
    if((a[i]>a[i-1])&&(a[i]>a[i+1]))
    {printf("Yes\n");}
    else{printf("No\n");}
	return 0; }