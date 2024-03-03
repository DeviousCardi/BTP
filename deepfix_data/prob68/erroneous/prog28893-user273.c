#include<stdio.h>
int product(int a){
    int i=0,value=1;
    scanf("%d",&i)
    while(i<a) {
        scanf("%d",&i);
        value=value*i;
        i++; }
    return value; }
int main() {
    int N;
    scanf("%d",&N);
    int result=product(N);
    printf("%d",result);
    return 0; }