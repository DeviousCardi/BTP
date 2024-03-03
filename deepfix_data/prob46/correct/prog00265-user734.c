#include <stdio.h>
int main(){
    int a,m,n,i;
    scanf("%d%d",&m,&n);
    a=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            a=a+1; } }
    if(m==a){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }