#include <stdio.h>
int main(){
    int n,m,i;
    int factors=0;
    for(i=2; i<n; i=i+1){
     if(n % i == 0){
         factors=factors+1;}
         else {continue;};}
    if(factors==m){printf("YES");}
    else(printf("NO"));
    return 0; }