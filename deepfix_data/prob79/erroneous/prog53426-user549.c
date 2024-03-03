#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int arr[1000],count=0;
	for(i=0; i<n; i++)   {
	    sanf("%d ",&arr[i]);
	    count++; }
	int *start, *end;
	start=&arr[0];
	end=&arr[count-1];
	int alice=0,bob=0;
	while(start!=end)   {
	    if(*start>*end)   {
	        alice=alice+ *start;
	        start++; }
	    if(*start<*end)  {
	        bob=bob+ *end
	        end--; }
	    else   {
	        bob=bob+ *end;
	        alice=alice+ *start;
	        start++;
	        end--; } }
	printf("%d %d"alice,bob);
	return 0; }