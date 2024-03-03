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
	    ch = getchar();
	    if(i==0)   {
	        if(s[i]>s[i+1])    printf("Yes\n");
	        else               printf("No\n");
	        continue; }
	    else  {
	        if((s[i]>s[i+1])&&(s[i]>s[i-1]))     printf("Yes\n");
	        else                                 printf("No\n");
	        continue; } }
	return 0; }