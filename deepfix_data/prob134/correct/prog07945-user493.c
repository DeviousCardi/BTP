#include <stdio.h>
#include <stdlib.h>
int recbin(int n, int k){
	if(n== 0 && k== 0){
		return 1; }
	else if(n!= 0 && k== 0){
		return 1; }
	else if(n<k){
	    return 0; }
	else
		return recbin(n-1,k-1)+recbin(n-1,k); }
void bin(int b){
    int n,k;
    for(k=1;k<=20;n++){
        for(n=0;n<=20;k++){
            if (recbin(n,k)==b){
                printf("%d %d",n,k); }
            {break;} } }
    printf("-1"); }
int main() {
    int b;
    scanf("%d",&b);
    bin(b);
	return 0; }