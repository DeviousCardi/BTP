#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int getways(int x, int m) {
    switch(m) {
        case 1:{
            return 1;break; }
        case 2:{
            if(x<3) return 0;
            x=(x/3)*3;
            if(x==3) return 1;
            return getways(x-3,2)+1; }
        case 3: {
            if(x<5) return 0;
            x=(x/5)*5;
            if(x==5) return 1;
            return getways(x-5,3)+2; } } }
int main() {
    int x;
    scanf("%d",&x);
    int q;
    if(x%5<3)  q=0;
    else q=1;
    printf("%d\n%d\n%d\n",getways(x,1),getways(x,2),getways(x,3));
    printf("%ld",getways(x,1)+getways(x,2)+getways(x,3)+q);
    return 0; }