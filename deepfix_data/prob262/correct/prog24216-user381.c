#include<stdio.h>
#include<strings.h>
int main() {
     int n;
    scanf("%d",&n);
    printf("%d",n);
    Reverse();
    return 0; }
int Reverse() {
    int n;
    if(n!=0)
    scanf("%d",&n); {
    Reverse();
    printf("%d",n); }
    return Reverse() ; }