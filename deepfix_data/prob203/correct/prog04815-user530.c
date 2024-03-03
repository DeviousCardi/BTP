#include <stdio.h>
int main() {
	int a,i,j,k,ch;
	scanf("%d\n",&a);
	int arr1[a];
	for(i=0;i<a;i++){
	    scanf("%d ",&arr1[i]); }
	for(j=0;j<a;j++){
	    for(k=0;k<a;k++){
	    ch=0;
	    if(arr1[k]==arr1[j]){
	        ch=ch+1; }
	    else
	    ch=0; }
	    if(ch!=1)
	    break; }
	if(ch!=1)
	printf("YES");
	else
	printf("NO");
	return 0; }