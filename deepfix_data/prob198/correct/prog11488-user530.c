#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,i,j,k,ch;
	scanf("%d\n",&a);
	int	arr1[a];
	for(i=0;i<a;i++){
	    scanf("%d\n",&arr1[i]); }
	scanf("%d\n",&b);
	int arr2[b];
    for(j=0;j<b;j++){
        scanf("%d\n",&arr2[j]); }
   ch=arr1[0];
    for(k=0;k<a;k++){
        if(ch>arr1[k])
        ch=arr1[k]; }
    printf("%d",ch);
	return 0; }