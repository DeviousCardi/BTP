#include <stdio.h>
int main(){
    int luckynum;
    int num;
    scanf("%d\n%d",&luckynum,&num);
    int a[num];
    int i,j,flag=0;
    while(k<num){
        scanf("%d",&a[k]);
        k++; }
    scanf("%d",a);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(a[i]+a[j]==luckynum){
                flag=1; } } }
    if(flag==1) printf("lucky");
    else printf("unlucky");
    return 0; }