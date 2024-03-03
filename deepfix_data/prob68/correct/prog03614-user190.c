#include<stdio.h>
int product(int n){
    int i;
    if(n==0){
        return 1; }
    else{
        scanf("%d",&i);
        return i*product(n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    long int p=product(n);
    printf("%d",p);
    return 0; }