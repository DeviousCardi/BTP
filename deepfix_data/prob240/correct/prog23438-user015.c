#include <stdio.h>
#include <stdlib.h>
int catalan(int m){
    int i;
    if(m<=1){
    return 1;}
    else{
    return 2*catalan(m-1); }
return 0; }
int main() {
    int t,a;
    scanf("%d\n",&t);
    a=catalan(t);
    printf("%d",a);
    return 0; }