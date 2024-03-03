#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0;
long getways(int x, int m) {
    if(m==1)
    return 1;
    else if(m==2) {
        if(x%3==0)
        return 1;
        else
        return (x-2)/3; }
    else if(m==3) {
        count+=(x-4)/5;
        if(x%5==0)
        return 1;
        else
        return getways(x-5,2); } }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    count+=getways(n,i);
    printf("%d",count);
    return 0; }