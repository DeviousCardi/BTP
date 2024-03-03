#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n, s=0, i;
	scanf("%ld", &n);
    for(i=1; i<n; i++){
        if(n%i==0){
            s=s+i; } }
    if(n==s){
        printf("YES"); }
    else{
        printf("NO"); }
	return 0; }