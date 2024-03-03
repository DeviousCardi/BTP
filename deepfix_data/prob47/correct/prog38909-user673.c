#include <stdio.h>
#include<stdlib.h>
int cat(int n) {
    if(n==0||n==1)
    return 1 ;
    else
    return (2*(2*n-1)*cat(n-1)) / (n+1) ; }
int main(){
    int i ,t , n , j , sum= 0 ;
    scanf("%d",&t);
    for(i=0 ; i <t ; i++){
        scanf("%d",&n) ;
        for(j=0 ; j<n ; j++){
            sum = sum + cat(j); }
        printf("%d/n",sum); }
    return 0 ; }