#include <stdio.h>
#include <stdlib.h>
int catalan(int m){
    if((m<=1)&&(m>=0)){
    return 1;}
    else if(m>1){
        return (2*(2*m-1)/m+1)*catalan(m-1); }
return 0; }
int main() {
    int t,a;
    scanf("%d\n",&t);
    a=catalan(t);
    printf("%d",a);
    return 0; }