#include <stdio.h>
int main(){
    int noitem,icost[10000],i,j,min,temp;
    scanf("%d",&noitem);
    for(i=0;i<noitem;i++) {
        scanf("%d ",&icost[i]); }
    for(i=0;i<noitem;i++) {
        for(j=i;j<noitem;j++) {
            min=icost[i];
            if(icost[j]<min)
            min=j; }
        temp=icost[j];
        icost[j]=icost[i];
        icost[i]=temp; }
    for(i=0;i<noitem;i++)
    printf("%d ",icost[i]);
    printf("end");
    return 0; }