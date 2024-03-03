#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<1)
      return 0;
    if(x==1)
       return 1;
    switch(m) {
        case 3:return getways(x-5,3)+getways(x-3,2)+getways(x-1,1);
        case 2:return getways(x-3,2)+getways(x-1,1);
        case 1:return getways(x-1,1); }
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",getways(n,3));
    return 0; }