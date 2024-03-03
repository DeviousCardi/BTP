#include <stdio.h>
#include <stdlib.h>
int main() {
	long long unsigned int n, s=0, i;
	scanf("%lld", &n);
    for(i=1; i<=(n/2); i++){
        if(n%i==0){
            s=s+i; } }
    if(n==s){
        printf("YES"); }
    else{
        printf("NO"); }
	return 0; }