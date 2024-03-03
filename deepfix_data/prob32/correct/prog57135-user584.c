#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
    int a[n];
	for(i=0;i<n;i=i+1)
	{scanf("\n%d",&a[i]);
	if (i==n-1) {
	     if (a[0]<a[1]||a[n-1]<a[n-2])
	    {printf ("Yes");
	    break;}}
	 if (n==2) {
	  if (a[0]==a[1])
	   printf ("No");
	   else printf ("Yes"); }
    if(i>1) {
     if   ( a[i-2]>a[i-1]&& a[i-1]<a[i] )
    { printf ("Yes");
    break;}
    else {
     if (i==n-1)   {printf ("No");break;}
     continue; } } }
	return 0; }