#include <stdio.h>
int main(){
    int n,a=0,i=1,j=0;
    scanf("%d",&n);
    int array[n];
    for(j=0;j<=n;j++){
        scanf("%d",&array[j]); }
    if(i>90){
        i=0; }
    for(i=1;i<n;i++){
        if(array[i]>array[i-1]){
            if(array[i]>array[i+1]){
                a++; } } }
    printf("%d",a);
    return 0; }