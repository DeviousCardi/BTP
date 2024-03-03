#include <stdio.h>
int main() {
    int x,y,p,z,i;
    scanf("%d",&x);
    scanf("%d",&p);
    for(i=0;i<p;i++) {
        if(x<plt())
        x=x-plt();
        else
        continue; }
    if(x>0)
    printf("yes");
    else
    printf("no");
    return 0; }
int plt(int y){
    scanf("%d",&y);
    return y; }