#include <stdio.h>
#include <stdlib.h>
int recbin(int m, int n){
	if(m != 0 && n == 0)
		return 1;
	else if(m == 0 && n != 0)
		return 0;
	else
		return recursivebinomial(--m, --n) + recursivebinomial(--m, n); }
void bin(int b){
    int n,k;
    for(n=0;n<=20;n++){
        for(k=0;k<=20;k++){
            if recbin(n,k)==b;{break;} } }
    printf("%d %d",n,k); }
int main() {
    int b;
    scanf("%d",&b);
    bin(b);
	return 0; }