#include <stdio.h>
int main(){
    int n=0,i=0,j=0;
    int list[100];
    scanf("%d",&n);
    while(i<n){
    scanf("%d",&list[i]);
    i++; }
    while(list[j]!='\0'){
        printf("%d",list[j]); }
    return 0; }