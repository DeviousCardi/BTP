#include <stdio.h>
#include <stdlib.h>
int main() {
	int no_line;
	scanf("%d",&no_line);
	int i,last,line[10];
	for(i=0; i<100; i++) {
	    if(i%2==0)
	    scanf("%d",&line[i/2]);
	    i++;
	    last=i; }
	line[last]='\0';
	for(i=0; i<last; i++)
	printf("%d\n",line[i]);
	return 0; }