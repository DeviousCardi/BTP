#include <stdio.h>
#include <stdlib.h>
long int fact(long int n) {
    if (n<=1)
    {return n;}
    else {
    return n*fact(n-1); } }
long int cat(long int n) {
    return (fact(2*n))/(fact(n+1)*fact(n)); }
int main() {
	int x,y,i,j=0;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{   j=1;
	    scanf("%d",&y);
	    if(y<0){printf("1\n");}
	    else {
	        while(y>cat(j)) {
	            j++; }
	    if(y==cat(j))
	    printf("yes\n");
	    else printf("no\n");} }
	return 0; }