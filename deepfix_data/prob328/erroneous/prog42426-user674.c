#include <stdio.h>
#include <stdlib.h>
int fab(int n) {
    if(n==0||n==1)
    return n-1;
    else
    return fab(n-1)+fab(n-2); }
int main() {
	int i, test;
	int arr[20];
	scanf("%d",&test);
	for(i=0;i<test;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<test;i++)
	{int n=1
	    while(fab(n)<arr[i])
	    n++;
	    if(fab(n)==arr[i];
	    printf("Yes\n");
	    else
	    printf("NO\n"); }
	return 0; }