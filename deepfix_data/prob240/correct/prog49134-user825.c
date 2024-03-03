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
    int  j,t,i,arr[50];
    scanf("%d\n", &t);
    for(i = 0 ;i<t ; i++){
        scanf("%d\n",&arr[i]); }
    for(i=0;i<t;i++){
    for(j=1;j<10;j++){
     if(arr[i]>=catalan(j)){
         printf("%d\n",catalan(j+1));
         break; } } }
	return 0; }