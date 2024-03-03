#include <stdio.h>
#include <stdlib.h>
long int fact(long int n) {
    if (n<=1)
    {return 1;}
    else {
    return n*fact(n-1); } }
int cat(int n) {
    return (fact(2*n))/(fact(n+1)*fact(n)); }
int main() {
	long int x,i,j=0;
	long int y;
	scanf("%ld",&x);
	for(i=0;i<x;i++)
	{   j=1;
	    scanf("%ld",&y);
	    if(y<=0){printf("no\n");}
	    else {
	        while(y>cat(j)) {
	            j++; }
	    if(y==cat(j))
	    printf("yes\n");
	    else printf("no\n");} }
	return 0; }