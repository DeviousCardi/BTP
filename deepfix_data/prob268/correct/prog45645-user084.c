#include <stdio.h>
#include <stdlib.h>
long count=1;
long *memarray[3];
long getways(int x, int m)
{int i,j;
    if(m==1) {
        if(x%3==0)
        count++;
        if(x%5==0)
        count++;
        return getways(x,m+1); }
    if(m==2) {
        count=count+(x-1)/3+(x-1)/5;
        for(i=1;i<x/3;i++) {
                if(((x-3*i)%5)==0) {
                    count++; } }
        return getways(x,3); }
    if(m==3) {
    for(i=1;i<x;i++) {
     for(j=1;j<x/3;j++) {
                if((x-3*j-i)%5==0)
                count++;
                printf("%ld",count); } } }
return count; }
int main()
{int n;
long c;
    scanf("%d",&n);
    c=getways(n,1);
    printf("%ld",c);
    return 0; }