#include <stdio.h>
int main() {
	int a,i,j,k,ch;
	scanf("%d\n",&a);
	int arr1[a];
	for(i=0;i<a;i++){
	    scanf("%d ",&arr1[i]); }
	for(j=0;j<a;j++){
	    ch=0;
	    for(k=0;k<a;k++){
	     if(arr1[j]==arr1[k]){
	        ch=ch+1; } } }
	if(ch>a)
	printf("YES");
	else
	printf("NO");
	return 0; }