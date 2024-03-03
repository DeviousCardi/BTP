#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x)
{   int i,j,k,t;
    int count=0;
    t=x/3;
        for(i=0;i<=x;i++){
        for(j=0;j<=t;j++){
            k=(x-3*j-i)/5;
            if((x-3*j-i)%5==0&&k>=0){
                count++; } } }
    return count; }
int main() {
  long int n;
  scanf("%ld",&n);
  long int k;
  k=getways(n);
  printf("%ld",k);
    return 0; }