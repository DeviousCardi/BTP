#include <stdio.h>
#include <stdlib.h>
int main() {
    long n , i , c , j , div[1000] , sum ;
    scanf("%ld",&n);
    c=0;
    for(i=1; i<=n/2 ; i++){
        if(n%i==0){
            div[c] =i;
            c++; } }
    sum = 0;
    for(j=0 ; j<=c ; j++){
	   sum = sum + div[j]; }
	if(sum ==n){
	    printf("YES"); }
	else printf("NO");
	return 0; }