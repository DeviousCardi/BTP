#include <stdio.h>
#include <stdlib.h>
int catalan(int m){
    if(m<=1){
    return 1;}
    else{
        return ((2*(2*m-1))/m+1)*catalan(m-1); }
return 0; }
int main() {
    int t,m,i;
    scanf("%d\n",&t);
    printf("%d",catalan(t));
    return 0; }