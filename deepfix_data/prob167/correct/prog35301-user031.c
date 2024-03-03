#include<stdio.h>
long int n,i=0,addition=0;
long int sum(){
    if(i>n)
    return 0;
    long int number;
    scanf("%ld ",&number);
    i++;
    addition=number+sum();
    return addition; }
int main() {
    scanf("%ld",&n);
    printf("%ld",sum());
    return 0; }