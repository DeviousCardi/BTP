#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i;
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++){
scanf("%d",&a[i]);}
int t;
scanf("%d",&t);
for (i=0;i<t;i++){
{if (a[t]>a[t+1] && a[t]>a[t-1])
printf ("Yes\n");
else printf ("No\n");}}
	return 0; }