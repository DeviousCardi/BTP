#include <stdio.h>
int main() {
    int year,i,dsum=0;
    scanf("%d",&year);
    while(year>0) {
        dsum=dsum+(year%10);
        year=year/10; }
    for(i=2016;(i%dsum)!=0;i++) { }
    printf("%d",i);
    return 0; }