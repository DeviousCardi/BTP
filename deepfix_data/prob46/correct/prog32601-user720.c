#include <stdio.h>
int main(){
    int n,m,i;
    int factors=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=2; i<n; i=i+1){
     if(n % i!=0){
         continue;}
     factors=factors+1;}
    if(factors==m){printf("YES");}
    else{printf("NO");}
    return 0; }