#include <stdio.h>
int main(){
    int noitem,icost[10000],i,j,min,temp;
    scanf("%d",&noitem);
    printf("\n");
    for(i=0;i<noitem;i++) {
        scanf("%d ",&icost[i]); }
    for(i=0;i<noitem;i++) {
        min=icost[i];
        for(j=i+1;j<noitem;j++) {
            if(icost[j]<min)
            min=j; }
        temp=icost[min];
        icost[min]=icost[i];
        icost[i]=temp; }
    for(i=0;i<noitem;i++)
    printf("%d ",icost[i]);
    printf("end");
    return 0; }