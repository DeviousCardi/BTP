#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,i,sum;
    scanf("%d",&a);
    a<pow(10,9);
    sum=0;
    for(i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i; } }
    if(sum==a){
        printf("YES"); }
    else{
        printf("NO"); }
	return 0; }