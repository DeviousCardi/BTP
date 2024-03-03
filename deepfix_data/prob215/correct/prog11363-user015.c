#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,sum;
    scanf("%d",&a);
    sum=0;
    for(i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i; } }
    if(sum==a){
        printf("Yes"); }
    else{
        printf("No"); }
	return 0; }