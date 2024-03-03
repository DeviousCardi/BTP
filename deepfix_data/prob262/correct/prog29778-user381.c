#include<stdio.h>
void Reverse();
int main() {
     int n;
    scanf("%n",&n);
    printf("%n",n);
    Reverse();
    return 0; }
void Reverse(){
    int n;
    if(n!=0)
    scanf("%n",&n); {
    Reverse();
    printf("%n",n); }
    return ; }