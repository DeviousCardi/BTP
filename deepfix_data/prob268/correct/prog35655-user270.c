#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    static int count; int i;
    if (m==1) {
        count=1; return getways (x,m+1); }
    if (m==2) {
        int d=x/3; count=count+d;
        return getways (x, m+1); }
    if (m==3) {
        int d=x/5; m=x-5;
        for(i=1;i<=d;i++) {
            count=count+m/3;
            m=m-5; }
        return count; } }
int main() {
    int money;
    scanf("%d",&money);
    printf("%d",getways(money,1));
    return 0; }