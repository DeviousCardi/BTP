#include <stdio.h>
int main(){
    int array1[10000],array2[10000],array3[10000];
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&array1[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<=99;j++){
            if(array1[i]==j)
            array2[j]++; } }
    printf("end");
    return 0; }