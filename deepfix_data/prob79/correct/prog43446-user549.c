#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int arr[1000],count=0;
	for(i=0; i<n; i++)   {
	    scanf("%d ",&arr[i]);
	    count++; }
	int *start, *end;
	start=&arr[0];
	end=&arr[count-1];
	int count1=0,count2=0;
	while(start!=(end-1))   {
	    if(*start<*end)   {
	        count1++;
	        *(start+1)=*start+*(start+1);
	        start++; }
	    else if(*start>*end)  {
	        count2++;
	        *(end-1)=*end+*(end-1);
	        end--; }
	    else   {
	        count1++;
	        count2++;
	        *(start+1)=*start+*(start+1);
	        start++;
	        *(end-1)=*end+*(end-1);
	        end--; } }
	if(start==end)  { }
	printf("%d %d",count1,count2);
	return 0; }