#include <stdio.h>
int main() {
    int n,ly,sy,a,g;
    sy=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        g=n/10;
        sy=sy+a;
        n=g; }
    for(ly=2016; ;ly++){
        if(ly%sy==0){
        printf("%d",ly);
            break; } }
    return 0; }