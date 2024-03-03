#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[2*n];
    int k;
    for(k=0;k<2*n;k++){
        scanf("%d",&a[k]); }
    int i,j,count=100000;
    for(i=0;i<(2*n-1);i++){
        for(j=(i+1);j<(2*n);j++){
            if(a[i]==a[j]){
            if((j-i)<count){    count=(j-i);} } } }
    printf("%d",count);
    return 0; }