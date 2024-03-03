#include <stdio.h>
int main(){
    int luckynum;
    int num;
    scanf("%d\n%d",&luckynum,&num);
    int a[num];
    int i=0,j=0,flag=0;
    while(i<num){
        scanf("%d",&a[i]);
        i++; }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(a[i]+a[j]==luckynum){
                flag=1; } } }
    if(flag==1) printf("lucky");
    else printf("unlucky");
    return 0; }