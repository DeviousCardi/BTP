#include <stdio.h>
#include <stdlib.h>
int cat(long int n) {
    return (fact(2*n))/(fact(n+1)*fact(n)); }
 int fact(long int n) {
    if (n<=1)
    {return 1;}
    else {
    return n*fact(n-1); } }
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
	    printf("Yes\n");
	    else printf("No\n");} }
	return 0; }