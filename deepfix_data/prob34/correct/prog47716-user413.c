#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i;
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++){
scanf("%d",&a[i]);}
int t,p;
scanf("%d",&t);
for (i=0;i<t;i++){
    scanf("%d",&p);
{if
    (a[p]>a[p+1] && a[p]>a[p-1])
printf ("Yes\n");
else printf ("No\n");}}
	return 0; }