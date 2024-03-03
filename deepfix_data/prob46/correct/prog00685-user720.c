#include <stdio.h>
int main(){
    int n,m,i,factors;
    factors = 0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=2; i<n; i=i+1){
    if((n % i)==0){
    factors=factors+1;};}
    if(factors == m){printf("YES");}
    else {printf("NO");}
    return 0; }