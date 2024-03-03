#include <stdio.h>
int main() {
	int d,n,var,sum=0;
	scanf("%d %d\n",&d,&n);
	int arr[50];
	for(int a=0;a<d;a++) {
	    scanf("%d ",&var);
	    arr[a]=var;
	    printf("%d\n",arr[a]); }
	return 0; }