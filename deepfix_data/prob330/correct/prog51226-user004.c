#include <stdio.h>
int main(){
    int n,a=0,i=1,j=0;
    scanf("%d",&n);
    int array[n];
    for(j=0;j<=n;j++){
        scanf("%d",&array[j]); }
    for(i=1;i<n-1;i++){
        if(array[i]>array[i-1]){
            if(array[i]>array[i+1]){
                a++; } } }
    printf("%d",a);
    return 0; }