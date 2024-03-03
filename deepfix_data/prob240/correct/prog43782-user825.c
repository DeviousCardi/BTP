#include <stdio.h>
#include <stdlib.h>
int catalan(int t){
    int i ,sum=0 ;
    if(t<=1){
        return 1; }
    else{
     for(i = 0 ; i<t ;i++){
         sum = sum+catalan(i)*catalan(t-i-1); }
     return sum; } }
int main() {
    int  t,i,j,arr[50];
    scanf("%d\n", &t);
    for(i = 0 ;i<t ; i++){
        scanf("%d\n",&arr[i]); }
    for( j = 0; j< t ;j++){
    for( i = 0; i<10 ;i++){
        if(catalan(i) >=arr[j]){
            printf("%d\n",catalan(i)); } } }
	return 0; }