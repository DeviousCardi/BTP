#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int b[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&b[i]); }
	if(i+1<=9){
	if((b[i]<=b[i-1])&&(b[i]<=b[i+1])){
	    printf("Yes\n"); }
	else{
	    printf("No\n");
	}}
	else {
	    if(b[i]<=b[i-1])
	        printf("Yes\n");
        else
            printf("No\n"); }
	return 0; }