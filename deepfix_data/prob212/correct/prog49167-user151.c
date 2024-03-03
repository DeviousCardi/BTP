#include <stdio.h>
int main(){
    int x,y,z,t,r,e,q,u,k;
    scanf("%d",&y);
     t=y/1000;
     r=y-(t*1000);
     e=r/100;
     z=r-(e*100);
     x=z/10;
     q=z-(x*10);
     k=t+e+x+q;
     printf("%d",k);
        return 0; }