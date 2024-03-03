#include <stdio.h>
int main(){
    int x,y,z,t,r,e,q,u,k,g;
    scanf("%d",&y);
     t=y/1000;
     r=y-(t*1000);
     e=r/100;
     z=r-(e*100);
     x=z/10;
     q=z-(x*10);
     k=t+e+x+q;
     for(g=2016;g>=2016;g++) {
         if(g%k==0)
         printf("%d",g);
         break; }
        return 0; }