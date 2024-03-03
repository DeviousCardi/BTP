#include <stdio.h>
#include <stdlib.h>
int step=0;
int hanoi(int n,char A,char C,char B) {
   if(n==0);
   {return 1;}
    hanoi(n-1,A,B,C);
    step=step+1;
    hanoi(n-1,B,C,A);
    return step; }
int main(){
    char A,B,C;
   printf("%d",hanoi(34,A,C,B));
return 0; }