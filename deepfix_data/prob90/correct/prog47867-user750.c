#include <stdio.h>
int main(){
    int lucn=0;
    int n,i,j=0;
    int lst[1000];
    int p[1000];
    scanf("%d\n%d",&lucn,&n);
    for(i=0;i<n;i++){
    scanf("%d",&lst[i]); }
    for(i=0;i<500;i++){p[i]=0;
        for(j=0;j<n;j++)
        if(lst[j]==i){
            p[i]=p[i]+1; } }
    for(i=0;i<500;i+=2){
        if(p[i]>=1 && p[lucn-i]>=1){
            printf("lucky");
            break; } }
    if(i==500)
     printf("unlucky");
    return 0; }