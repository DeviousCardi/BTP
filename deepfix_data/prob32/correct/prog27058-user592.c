#include <stdio.h>
#include <stdlib.h>
int main() {
	char Ar[20];
	int i,n,t=0;
	scanf ("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf ("%c\n",&Ar[i]);}
	for(i=0; i<n; i++){
	    if((Ar[i]<Ar[i-1])&& (Ar[i]<Ar[i+1]))
	     {t=1;}
	     printf("%d", t);
	    if(Ar[n-1]<Ar[n-2])
	     {t=1;}
	     printf("%d", t);
	    if(Ar[0]<Ar[1])
	     {t=1;}
	     printf("%d", t); }
	     if (t==1)
	     printf("Yes");
	     else
	     printf("No");
	return 0; }