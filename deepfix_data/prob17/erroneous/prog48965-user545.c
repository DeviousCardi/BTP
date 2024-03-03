#include <stdio.h>
int main() {
	int arr1[25],arr2[25];
	int l1=0,l2=0,var1=0,var2=0;
	scanf("%d\n",&l1);
	for(int i=0,i<l1,i++) {
        scanf("%d\n",&var1)
        arr1[i]==var1; }
    scanf("%d\n",&l2);
	for(int i=0,i<l2,i++) {
        scanf("%d\n",&var2)
        arr2[i]==var2; }
	if(l2>l1)
	printf("no");
	else {
	    for(int i=0;i<l1;i++) {
	        if(arr1[i]==arr2[0]) {
	            for(int b=1,c=1;b<l2;b++,c++) {
	                if(arr2[b]!=arr1[i+c])
	                flag=-1; } } } }
	return 0; }