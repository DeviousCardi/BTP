#include<stdio.h>
int n,i=0;
int sum(){
    if(i>n)
    return 0;
    long int number,addition;
    scanf("%ld",&number);
    i++;
    addition=number+sum();
    return addition; }
int main() {
    scanf("%d",&n);
    printf("%ld",sum());
    return 0; }