#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
    char a[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    scanf("%c",&a[i]); }
	if(a[i]==a[(n-i)+1]){
	    printf("No"); }
	else{
	    printf("Yes"); }
	return 0; }