#include <stdio.h>
#include <stdlib.h>
int main() {
   char c[1000];
   int counter=0;
   int ch=getchar();
   while (ch!=EOF) {
        c[counter]=ch;
        counter++;
        ch=getchar(); }
   int i,d=0;
   for(i=0;i<counter;i++) {
	    if(c[i]==c[counter-i-1]) {
	        d++; } }
	if(d==counter)
	printf("YES");
	else
	printf("NO");
	return 0; }