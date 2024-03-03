#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x)
{   int i,j,m,n;
    int count=0;
    n=x/3;
        for(i=0;i<=x;i++){
        for(j=0;j<=n;j++){
            m=(x-3*j-i)/5;
            if((x-3*j-i)%5==0&&m>=0){
                count++; } } }
    return count; }
int main() {
  long int n;
  scanf("%ld",&n);
  long int k;
  m=getways(n);
  printf("%ld",m);
    return 0; }