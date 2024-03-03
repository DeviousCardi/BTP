#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
    char a[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    scanf("%c",&a[i]); }
	if(n%2!=0.0){
	if(a[i]==a[(n+1)-i]){
	   printf("No"); }
	else{
	    printf("Yes"); } }
	else{
	    printf("No"); }
	return 0; }