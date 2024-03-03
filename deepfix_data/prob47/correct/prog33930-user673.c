#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==1) return 1 ;
    else if(n==0) return 1 ;
    return (2*(2*n - 1)*cat(n-1)) / (n+1); }
int main() {
    int t , k , i , j , sum ;
    scanf("%d\n",&t);
    for(i=0 ; i <t ; i++){
        scanf("%d",&k);
        sum = 0 ;
        for(j=k ; j>=0 ; j--){
        sum = sum + cat(j-1);}
        printf(" %d\n",sum); }
	return 0; }