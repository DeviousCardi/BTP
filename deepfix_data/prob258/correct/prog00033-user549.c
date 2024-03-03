#include <stdio.h>
#include <stdlib.h>
int main() {
	int size;
	scanf("%d",&size);
	char s[size];
	int i;
	int p=0;
	for(i=0; i<size; i++)    {
	    scanf("%c\n",&s[i]); }
	for(i=1; i<size-2; i++)   {
	    if(((s[0]>s[1])||(s[size-1]>s[size-2]))||((s[i]>s[i-1])&&(s[i]>s[i+1])))   {
	       p = 1;
	       printf("Yes\n");
	       goto end;  } }
	if(p==0)   {
	    printf("No\n"); }
    end:
	return 0; }