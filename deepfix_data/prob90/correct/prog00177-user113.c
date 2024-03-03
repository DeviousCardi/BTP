#include <stdio.h>
int main(){
    int lucky;
    int total;
    scanf("%d%d",&lucky,&total);
    int a[total];
    int i;
    for(i=0;i<total;i++){
        scanf("%d",a[i]); }
    printf("%d",a[0]);
    return 0;
    int j;
    for(i=0;i<total-1;i++){
        for(j=i+1;j<total;j++){
            if((a[i]+a[j])==lucky){
                printf("lucky");
                return 0; } } }
    printf("unlucky");
    return 0; }