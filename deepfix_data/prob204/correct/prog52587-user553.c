#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
    char a[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    scanf("%c",&a[i]); }
	if(a[i]!=a[(n+1)-i]){
	   printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }