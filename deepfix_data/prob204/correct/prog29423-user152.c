#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20];
	int i=0;
	int j,k,flag;
	scanf("%d",&arr[0]);
	while(arr[i]!=0) {
	    scanf("%d",&arr[i+1]);
	    i++; }
	for(j=i-1,k=0;k<i;j--,k++) {
	    if(arr[j]==arr[i])
	    flag=1;
	    else {
	        flag=0;
	        break; } }
	if(flag==1)
	printf("YES");
	else
	printf("NO");
	return 0; }