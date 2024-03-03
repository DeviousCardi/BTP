#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int i,c,d,a;
    if (y==1){
            return 1; }
    if (y==2){
            c=x/3;
            return c+1; }
    if (y==3){
            d=x/5;
            a=0;
            for(i=0;i<=d;i++){
                    a=a+getways(x-5*i,2); }
            return a; } }
int main() {
    int x,
    scanf("%d",&x);
    b=getways(x,3);
    printf("%d",b);
    return 0; }