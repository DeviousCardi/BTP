#include <stdio.h>
int main() {
    int h,i=0;
    int nop;
    int diff=0;
    scanf("%d",&h);
    scanf("%d",&nop);
    int Plat0=0,Plat1=0;
    scanf("%d",&Plat0);
    for(i=1;i<nop;i++) {
        Plat1=Plat0;
        scanf("%d",&Plat0);
        diff=Plat1-Plat0;
        if(diff<0) h-=diff; }
    if(h>0 ) printf("Yes");
    if(h<=0) printf("No"); }