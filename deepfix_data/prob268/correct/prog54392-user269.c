#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int count=0;
    if(m==1) {
        count++;
        if(x%3==0)
        count++;
        if(x%5==0)
        count++;
        return count; }
     else if(m==2)
    {   count=0;
        for(int i=1;i<=x/3;i++) {
            if(x-(3*i)>=0)
            count++;
            if(x-(5*i)>=0)
            count++;
            return count; } } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,1)+getways(n,2));
    return 0; }