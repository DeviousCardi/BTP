#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i=0,j=0,k=0,l=0;
	scanf("%d",&h);
	for(i=0;i<h;i++)
	{   if(i!=(h-1))
	    {for(j=0;j<(h-1-i);j++) {
	        printf("%c",' '); }
	    printf("%c",'*');
	    for(k=0;k<i;k++) {
	        printf("%c",' '); }
	    if(i!=0)
	    {printf("%c\n",'*');}
	    else
	    {} }
	else {
	    for(l=0;l<((2*h)-1);l++) {
	        printf("%c",'*'); } } }
	return 0; }