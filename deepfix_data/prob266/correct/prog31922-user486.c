#include <stdio.h>
int main(){
 int i,str[4],t;
 scanf("%d",str);
 t=str[0]+str[1]+str[2]+str[3];
 for(i=0;i>=0;i++) {
     if((2016+i)%t==0)
    { printf("%d",2016+i);
      break;} }
    return 0; }