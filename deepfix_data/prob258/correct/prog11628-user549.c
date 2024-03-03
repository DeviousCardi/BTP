#include <stdio.h>
#include <stdlib.h>
int main() {
	int size;
	scanf("%d",&size);
	char s[size];
	int ch,i,j;
	ch = getchar();
	for(i=0; i<size; i++)    {
	    s[i] = ch;
	    ch = getchar(); }
	if(s[0]>s[1])               printf("Yes\n");
	if(s[size-1]>s[size-2])     printf("Yes\n");
	for(i=1; i<size-1; i++)    {
	     for(j=i-1; j<=i+1; j+=2)   {
	         if(s[i]>s[j])   {   printf("Yes\n");   break;   } } }
	return 0; }