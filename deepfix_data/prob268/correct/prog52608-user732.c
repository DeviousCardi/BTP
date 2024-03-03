#include <stdio.h>
#include <stdlib.h>
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
    return 0; }