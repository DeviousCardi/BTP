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
	if(s[0]>s[1])  {  printf("Yes");   goto end;}
    if(s[size-1]>s[size-2]) {  printf("Yes");   goto end;}
	for(i=1; i<size-1; i++)   {
	    if((s[i]>s[i-1])&&(s[i]>s[i+1]))   {
	       printf("Yes\n");
	       break;   } }
    end:
	return 0; }