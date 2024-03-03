#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0;
long getways(int x, int m) {
    if(m==1)
        return 1;
    if((m==2)&&(x>2)) {
        count++;
        if(x-(3*count)<3)
            return count;
        else
            return getways(x,m); } { } }
int main() {
    int a=0,n,y;
    scanf("%d",&n);
    for(y=1;y<4;y++) {
        a=a+getways(n,y); }
    printf("%d",a);
    return 0; }