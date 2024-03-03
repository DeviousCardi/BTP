#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,i,j=0;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{   j=1;
	    scanf("%d",&y);
	    if(y==cat(j))
	    printf("Yes\n");
	    else printf("No\n"); }
	return 0; }
int cat(int n){
    return (fact(2*n))/((fact(n+1))*(fact(n)))}
long int fact(int n){
    return n*fact(n-1); }