#include<stdio.h>
int n,i=0;
int sum(){
    if(i>n)
    return 0;
    int number,addition;
    scanf("%d ",&number);
    i++;
    addition=number+sum();
    return addition; }
int main() {
    scanf("%d",&n);
    printf("%ld",sum());
    return 0; }