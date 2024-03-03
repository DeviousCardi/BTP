#include <stdio.h>
int main() {
    int n,ly,sy,a,g,i;
    sy=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        g=n/10;
        sy=sy+a;
        n=g;
    }printf("%d",sy);
    if(2016%sy==0){
    for(ly=2016; ;ly++){
        if(i%sy==0){
            break;
        printf("%d",ly);} } }
    return 0; }