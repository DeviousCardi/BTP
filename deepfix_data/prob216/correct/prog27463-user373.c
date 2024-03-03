#include <stdio.h>
#include <stdlib.h>
int fibo(int num){
    if(num==1)
    return 0;
    if(num==2)
    return 1;
    return fibo(num-1)+fibo(num-2); }
int main() {
    int size,i,t;
    scanf("%d",&size);
    for(i=1 ; i<=size; i++){
        scanf("%d",&t);
        printf("%d\n",fibo(t)); }
	return 0; }