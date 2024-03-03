#include <stdio.h>
#include <stdlib.h>
int main() {
    int n , i , c , j , div[1000] ;
    scanf("%d"&n);
    j=0;
    for(i=1; i<=n/2 ; i++){
        if(n%i==0){
            div[j];
            c++ } }
    for(j=0 , j<=c ; j++){
	   sum = sum + div[j]; }
	if(sum ==n){
	    printf("YES"); }
	else printf("NO");
	return 0; }