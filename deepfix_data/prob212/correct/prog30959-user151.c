#include <stdio.h>
int main(){
    int x,y,z=0,r=0,m=0,n=0,b=0,v;
    for(x=1;x<=4;x++) {
        scanf("%d",y);
        z=z+y;
        if(x==1)
        r=y*1000;
        else if(x==2)
        m=y*100;
        else if(x==3)
        n=y*10;
        else if(x==4)
        b=y;
        v=r+m+n+b;
        printf("%d\n%d",z,v); }
        return 0; }