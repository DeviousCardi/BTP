#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,c=0;
	int b[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&b[i]);
	    if(i+1<=9 && i-1>=0){
	if((b[i]<=b[i-1])&&(b[i]<=b[i+1])){
	    c++; } }
	else {
	    if(b[i]<=b[i-1])
	        c++; } }
	if(c)
	    printf("Yes\n");
    else
        printf("No\n");
	return 0; }