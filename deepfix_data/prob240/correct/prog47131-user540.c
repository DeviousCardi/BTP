#include <stdio.h>
#include <stdlib.h>
int fact (int);
int fact (int f){
    int i;
    for(i=1;i<=f;i++){
        f=f*i; }
    return f; }
int main() {
	int t;
	scanf("%d",&t);
	printf("%d",fact(4));
	return 0; }