#include <stdio.h>
int main() {
    int x,y[5],i,z,j;
    for(i=0;i<x;i++) {
        scanf("%d",&y[i]); }
    for (i=0;i<x;i++) {
        z=y[i];
        for (j=0;j<x;j++) {
            if (y[j]<y[i]) {
                z=y[i]; }
            else
                continue; } }
    for (i=0;i<x;i++) {
        printf("%d",y[i]); }
    printf("end");
    return 0; }