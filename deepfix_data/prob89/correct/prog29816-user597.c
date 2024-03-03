#include <stdio.h>
int main(){
    int luk,n,i,j;
    int lst[100];
    scanf("%d\n%d\n",&luk,&n);
    for(i=0;i<n;i++){
        scanf("%d ",&lst[i]); }
    j=lst[0];
     j=lst[0];
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(luk==lst[i]+lst[j]){
                printf("lucky");
                break; } } }
    return 0; }