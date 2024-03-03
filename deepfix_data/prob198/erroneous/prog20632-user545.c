#include <stdio.h>
#include <stdlib.h>
int main() {
	int l1,l2,arr1[25],arr2[25],arr3[25],flag=0;
	scanf("%d\n",l1);
	for(int i=0;i<l1;i++)
	scanf("%d\n",arr1[i]);
	scanf("%d\n",l2);
	for(int i=0;i<l2;i++)
	scanf("%d\n",arr2[i]);
	for(int a=0,c=0;a<l1;a++) {
	    for(int b=0;b<l2;b++)
	    if(arr2[b]==arr[a])
	    flag1=-1;
	    if(flag==-1)
	    continue;
	    else {
	        arr3[c]=arr[a];
	        c++; } }
	for(int d=0;d<l1;d++)
	printf("%d\n",arr3[d]);
	return 0; }