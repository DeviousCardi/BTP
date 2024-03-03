#include <stdio.h>
int main(){
    int lucn=0;
    int n,i,j=0;
    int lst[1000];
    scanf("%d\n%d\n",&lucn,&n);
    for(i=0;i<1000;i++){
        lst[i]=0; }
    for(i=0;i<n;i++){
    scanf("%d",&lst[i]);
    lst[lst[i]]=1;
    printf("%d",lst[i]); }
    for(i=0;i<=250;i++){
        if(lst[i]==1 && lst[lucn-i]==1){
            printf("lucky");
            break; } }
    if(i==251)
     printf("unlucky");
    return 0; }