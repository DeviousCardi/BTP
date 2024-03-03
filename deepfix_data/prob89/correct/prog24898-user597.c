#include <stdio.h>
int main(){
    int luk,n,i,j,temp;
    int lst[100];
    scanf("%d\n%d\n",&luk,&n);
    for(i=0;i<n;i++){
        scanf("%d ",&lst[i]); }
    temp=0;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(luk==(lst[i]+lst[j])){
                temp=1; }
            else{
                continue; } } }
    if(temp=1){
        printf("lucky"); }
    else{
        printf("unlucky"); }
    return 0; }