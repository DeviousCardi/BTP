#include <stdio.h>
int main(){
    int n,num[100],i=0,k,j=0;
    scanf("%d\n",&n);
    while(num[i]!=EOF){
       scanf("%d ",&num[i]);
       i++; }
    for(k=0;k<98;k++){
        if((num[k+1]>num[k])&&(num[k+1]>num[k+2])){
            j=j+1; } }
    printf("%d",j);
    return 0; }