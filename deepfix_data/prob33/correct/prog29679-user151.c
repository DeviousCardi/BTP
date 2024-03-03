#include <stdio.h>
int main() {
    int x,y=0,p,z,i;
    scanf("%d",&x);
    scanf("%d",&p);
    for(i=0;i<p;i++) {
        if(plt()>y)
        y=plt();
        else
        y=y-plt();
        if(x>plt())
        x=x-y; }
    if(x>0)
    printf("Yes");
    else
    printf("No");
    return 0; }
int plt(int y){
    scanf("%d",&y);
    return y; }