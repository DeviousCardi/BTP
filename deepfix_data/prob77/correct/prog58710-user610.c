#include <stdio.h>
int main() {
    int p,i,max,min;
    scanf("%d",&p);
    int mon[p];
    for(i=0;i<p;i++) {
        scanf("%d",&mon[i]); }
    max=mon[0];
    for(i=1;i<p;i++) {
        if(max<mon[i])
        max=mon[i]; }
    min=mon[0];
    for(i=1;i<p;i++) {
        if(min>mon[i])
        max=mon[i]; }
    printf("%d %d",max,min);
    printf("end");
    return 0; }