#include <stdio.h>
#include <stdlib.h>
int kat(int x);
long *memarray[3];
long getways(int x, int m) {
    if(x==0||x==1||x==2)
   m=1;
   else if((x>=3)&&(x<5)){
       m=2; }
   else{
       if(x>=5)
       m=3; }
return m; }
int main() {
int k,x,y,j;
scanf("%d",&x);
k=getways(x,y);
  switch(k){
      case 1:printf("%d",k); break;
      case 2:printf("%d",k); break;
      case 3:  j=kat(x);
              printf("%d",j); break;
      default : printf("it will take time \n plese wait!!!!"); }
    return 0; }
int kat(int x){
int k;
    if(x==0)
    return 0;
else{
    k=kat(x%5)+kat((x%5)%3)+kat(((x%5)%3)%1);
    return(k); } }