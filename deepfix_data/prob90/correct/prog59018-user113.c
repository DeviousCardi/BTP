#include <stdio.h>
int main(){
    int lucky;
    int total;
    scanf("%d%d",&lucky,&total);
    int a[total];
    int i;
    for(i=0;i<total;i++){
        scanf("%d",a[i]); }
    int j;
    for(i=0;i<total;i++){
        for(j=i;j<total;j++){
            if((a[i]+a[j])==lucky){
                printf("lucky");
                return 0; } } }
    printf("unlucky");
    return 0; }