#include <stdio.h>
#include <stdlib.h>
int main() {
    double i,j;
    int S,N;
    int sum=0;
    int arr[10000];
    scanf("%d\n",&N);
    for(i=-100000;(i>-100000||i<100000);i++){
        scanf("%d\n",&arr[i]); }
    scanf("%d\n",&S);
   for(i=-100000;(i>=-100000||i<=100000);i++){
    for(j=100000;(j>=-100000||j<=100000);j--){
        sum=arr[i]+arr[j]; } }
   if(sum==S){
       printf("(%lf,%lf)",i,j); }
return 0; }
return 0; }