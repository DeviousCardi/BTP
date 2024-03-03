#include <stdio.h>
#include <stdlib.h>
int catalan(int m){
    if(m<=1){
    return 1;}
    else{
    return (2.0*(2*m-1)*catalan(m-1))/(m+1); }
return 0; }
int main() {
    int t,i,j,m;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&m);
        printf("%d\n",m); }
    return 0; }