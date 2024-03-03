#include <stdio.h>
int main(){
    int n,i,j=0,b=0,a,p=0,x=0,y=0,k=200;
    int s[200];
    scanf("%d\n",&n);
    for(p=0;p<2*n;p++){
        scanf("%d",&s[p]); }
    printf("%d%d",n,s[2]+s[3]);
    return 0;
    i=0;
    while(i<2*n){
        a=s[i];
        y=0;
        while(j<2*n){
            b=s[i+1];
            if(a==b){
                x=y+1; }
            if(x<k){
                k=x; }
            y++; }
        i++; }
    printf("%d",k);
    return 0; }