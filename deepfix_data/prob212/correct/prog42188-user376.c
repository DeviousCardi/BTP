#include <stdio.h>
int main(){
    int y, cy=2016,s,k,l,j,sum;
    scanf("%d",&y);
    while(cy>=2016) {
        s=(y/1000);
        k=y/100-s*10;
        j=y/10-((100*s)+(10*k));
        l=(y-1000)-((1000*s)+(100*k)+(10*j));
        sum=s+k+l+j;
        if(cy%s==0)
        break;
        cy++; }
    printf("%d",cy);
    return 0; }