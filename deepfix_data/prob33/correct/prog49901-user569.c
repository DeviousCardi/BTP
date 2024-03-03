#include <stdio.h>
int main() {
    int h,i=0;
    int nop;
    int diff=0;
    scanf("%d",&h);
    scanf("%d",&nop);
    int Platp=0,Platn=0;
    scanf("%d",&Platn);
    for(i=1;i<nop;i++) {
        Platp=Platn;
        scanf("%d",&Platn);
        diff=Platn-Platp;
        if(diff<0) h+=diff; }
    if(h>0 ) printf("Yes");
    if(h<=0) printf("No"); }