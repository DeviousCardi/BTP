#include <stdio.h>
int main(){
    int array1[10000],array2[10000],array3[10000];
    int i,j,k,n,count=0,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        array2[i]=0; }
    for(i=0;i<n;i++){
        scanf("%d ",&array1[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<=99;j++){
            if(array1[i]==j)
            {num=array2[j];
            array2[j]=num+1; }
            else
            continue; } }
    for(k=0;k<=99;k++){
        for(i=count;i<(count+array2[k]);i++){
            array3[i]=k;
            count++; } }
    for(i=0;i<n;i++){
        printf("%d ",array3[i]); }
    printf("end");
    return 0; }