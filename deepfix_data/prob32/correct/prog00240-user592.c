#include <stdio.h>
#include <stdlib.h>
int main() {
	char Ar[20];
	int i,n,t=0;
	scanf ("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf ("%c\n",&Ar[i]);
	    Ar[-1]=Ar[0]+1;
	    Ar[n]=Ar[n-1]+1;
	    if((Ar[i]<Ar[i-1])&& (Ar[i]<Ar[i+1]))
	     {t=1;} }
	     if (t==1)
	     printf("Yes");
	     else
	     printf("No");
	return 0; }