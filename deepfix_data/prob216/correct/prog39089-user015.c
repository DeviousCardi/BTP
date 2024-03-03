#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){
    if(n<0){
        return -1; }
    else if(n==1){
        return 0; }
    else if(n==2){
        return 1; }
    else{
        return fibonacci(n-1)+fibonacci(n-2); }
return 0; }
int main() {
    int num,i,input[50],output[50];
    scanf("%d\n",&num);
    for(i=0;i<num;i++){
        scanf("%d\n",&input[i]); }
    for(i=0;i<num;i++){
        output[i]=fibonacci(input[i]);
        printf("%d\n",output[i]); }
	return 0; }