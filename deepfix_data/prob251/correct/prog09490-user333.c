#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)
      return 0;
    if(x==0)
       return 1;
    switch(m) {
        case 5:return getways(x-5,5)+getways(x-3,3)+getways(x-1,1);
        case 3:return getways(x-3,3)+getways(x-1,1);
        case 1:return getways(x-1,1); }
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",getways(n,5));
    return 0; }