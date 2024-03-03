#include <stdio.h>
int main() {
    int x=0,y[x],i,z,j;
    for(i=0;i<x;i++) {
        scanf("%d",&y[i]); }
    for (i=0;i<x;i++) {
        z=y[i];
        for (j=0;j<x;j++) {
            if (y[j]>y[i]) {
                y[i]=y[j];
                y[j]=y[i]; } } }
    for (i=0;i<x;i++) {
        printf("%d",y[i]); }
    printf("end");
    return 0; }