#include <stdio.h>
int main(){
    int m,n,count=0,i=2;
    scanf("%d%d",&m,&n);
    if(n>0){
        while(i<n){
            if ((n%i)==0){
                count=count+1; }
            i++; }
        if (count==m){
            printf("YES"); }
        else {
            printf("NO"); } }
    else {
        printf("NO"); }
    return 0; }