#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void transfer(int n,char from,char to,char temp){
   int count=0;
   if(n>0){
        transfer(n-1,from,temp,to);
        printf("move disk %d from %c to %c\n",n,from,to);
        count++;
        printf("%d",count);
        transfer(n-1,temp,to,from); } }
int main(){
    int n;
    scanf("%d",&n);
    transfer(n,'l','r','c');
        return 0; }