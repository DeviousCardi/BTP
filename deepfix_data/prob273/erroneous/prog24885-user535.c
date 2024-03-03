#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,f;
	scanf("%d",&d);
	e=d/2+1;
	f=e;
	for (a=1;a<=f;a++) {
	    for(b=1;b<e;b++) {
	     printf(" "); }
	    for (c=1;c<=a-1;c++) {
	     printf("%d",(f-a+c)%10); }
	    printf("%d",f);
	    e--;
	    printf("\n"); }
	e=f-2;
	for(a=1;a<=d/2;a++) {
	    for(b=1;b<=a;b++) {
	        printf(" "); }
	    for(c=1;c<=e;c++) {
	        printf("%d",(a+c)); }
	    printf("%d",p%10);
	    e--; }
	return 0; }