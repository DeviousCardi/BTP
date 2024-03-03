#include <stdio.h>
int main() {
    int x,y[x],i,z,j,k;
    scanf("%d ",&x);
    for(i=0;i<x;i++) {
        scanf("%d",&y[i]); }
    for (i=0;i<x;i++) {
        z=y[i];
        for (j=0;j<x;j++) {
            if (y[j]>y[i]) {
                k=y[j];
                y[j]=z;
                z=k; } } }
    for (i=0;i<x;i++) {
        printf("%d ",y[i]); }
    printf("end");
    return 0; }