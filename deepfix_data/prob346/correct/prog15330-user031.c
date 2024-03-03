#include <stdio.h>
int main(){
    char array[10000];
    int i,j,k,n,temp;
    scanf("%d",&n);
    for(i=0;i<2*n;i++){
        scanf("%c",&array[i]); }
    for(i=0;i<n;i++){
        printf("%c",array[i]); }
    for(j=0;j<n;j++){
        for(k=0;k<n-1;k++){
            if(array[k]>array[k+1]){
                temp=array[k];
                array[k]=array[k+1];
                array[k+1]=temp; }
            else
            continue; } }
    for(i=0;i<n;i++){
        printf("%c",array[i]); }
    printf("end");
    return 0; }