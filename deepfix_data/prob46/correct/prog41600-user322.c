#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&m,&n);
    int i,x;
    x=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            x=x+1; }
        else{
            x=x; } }
    if(m=x){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }