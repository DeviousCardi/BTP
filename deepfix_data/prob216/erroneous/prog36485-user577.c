#include <stdio.h>
#include <stdlib.h>
int fun(int n) {
    int fun(0)=0;
    int fun(1)=1;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else return fun(n-1)+fun(n-2); }
int main() {
	int no_line;
	scanf("%d",&no_line);
	int i,line[10];
	for(i=0; i<2*no_line; i++) {
	    if(i%2==0) {
	        scanf("%d",&line[i/2]);
	        i++; } }
	for(i=0; i<no_line; i++) {
	    printf("%d\n", fun(line[i]) ); }
	return 0; }