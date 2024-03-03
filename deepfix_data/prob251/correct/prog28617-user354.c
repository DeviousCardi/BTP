#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    switch(m) {
        case 1:{
            return 1;break; }
        case 2:{
            if(x<3) return 0;
            if(x==3) return 1;
            return getways((x/3)*3,2)+2; }
        case 3: {
            if(x<5) return 0;
            if(x==5) return 1;
            return getways((x/5)*5,3)+3; } } }
int main() {
    int x;
    scanf("%d",&x);
    printf("%ld",getways(x,1)+getways(x,2)+getways(x,3));
    return 0; }