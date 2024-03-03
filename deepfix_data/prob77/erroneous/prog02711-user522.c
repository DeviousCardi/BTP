#include <stdio.h>
int main() {
    int mon[1000],x,temp1,temp2,temp3;
    scanf("%d",&x);
    for(int i=0;i<=x;i++) {
        scanf("%d",&mon[i]); }
    temp1=mon[0];
    temp2=mon[0];
    for(int i=0;i<=x;i++) {
        if(temp1<mon[i]) {
        temp1=mon[i];
        count1=i; }
        if(temp2>mon[i]) {
        temp2=mon[i];
        count2=i; } }
    temp3=mon[count1];
    mon[count1]=mon[count2];
    mon[count2]=temp3;
    for(int i=0,i<=x;i++) {
        printf("%d" ,mon[i]); }
    printf("end");
    return 0; }