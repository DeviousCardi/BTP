#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0) return 1;
    else return ((4*n-2)/n+1)*cat(n-1); }
int main() {
	int i,t;
	scanf("%d",&t);
	for(i=0;i<=30;i++){
        if (cat(i+1)> t){
        printf("%d",cat(i));
        break; }
        else if (cat(i+1)==t){
            printf("%d",cat(i+1));
        break; } }
    return 0; }