#include <stdio.h>
int main() {
    int ppl;
    int a[1000];
    int temp
    int i;
    int min,max;
    int minid,maxid;
    scanf("%d",&ppl);
    for(i=0;i<ppl;i++){
        scanf("%d",&a[i]); }
    max=min=a[0];
    maxid=minid=0;
    for(i=0;i<ppl;i++){
        if(a[i]>max){
            max=a[i];
            maxid=i; }
        if(a[i]<min){
            min=a[i];
            minid=i; } }
    temp=a[minid];
    a[minid]=a[maxid];
    a[maxid]=temp;
    for(i=0;i<ppl;i++){
        printf("%d",a[i]); }
    printf("end");
    return 0; }