#include <stdio.h>
int main() {
    int x,max,min,j,i,k,s;
    scanf("%d ",&x);
    int y[1000];
    for(i=0;i<x;i++) {
        scanf("%d",&y[i]); }
    max=y[0];
    for(j=0;j<x;j++) {
            if (max>=y[j]) {
                max=y[j];
                k=j; } }
    min=y[0];
    for(j=0;j<x;j++) {
        if(min<=y[j]) {
            min=y[j];
            s=j; } }
    y[k]=min;
    y[s]=max;
    for (i=0;i<x;i++) {
        printf("%d ",y[i]); }
    printf("end");
    return 0; }