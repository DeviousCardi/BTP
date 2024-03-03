#include <stdio.h>
#include <stdlib.h>
int main() {
	int size;
	scanf("%d",&size);
	char s[size];
	int ch,i;
	ch = getchar();
	for(i=0; i<size; i++)    {
	    s[i] = ch;
	    ch = getchar(); }
	for(i=0; i<size; i++)    {
	     if(i==0)   {
	           if(s[i]>s[i+1])                      printf("Yes\n"); }
	     else if((i!=0)&&(i!=size-2))  {
	           if((s[i]>s[i+1])&&(s[i]>s[i-1]))     printf("Yes\n"); }
	     else if(i==size-1)    {
	         if((s[i]>s[i-1]))                      printf("Yes\n"); }
	     else                                       printf("No\n"); }
	return 0; }