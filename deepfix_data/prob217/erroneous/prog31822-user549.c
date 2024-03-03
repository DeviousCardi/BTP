#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i;
	scanf("%d\n",&N);
	int s[N];
	for(i=0; i<N; i++)   {
	    scanf("%d",&s[i]); }
	int S;
	scanf("%d",&S);
	for(i=0; i<n; i++)   {
	    for(j=0; j<n; j++)    {
	        if(j!=i)    {
	            if(s[i]+s[j]==S)   printf("(%d,%d)",i,j);
	            else continue; } } }
	return 0; }