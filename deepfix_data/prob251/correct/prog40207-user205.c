#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==1&&m==1)  return 1;
    if(x==3&&m==2)  return 1;
    if(x==5&&m==5) return 1;
    if(m==1)
        return getways(x-1,1);
    else if(m==2)
        return  getways(x-3,2)+(x-1,1);
    else if(m==3)
        return getways(x-5,3)+getways(x-3,2)+getways(x-1,1); }
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0; i<3; i++)
        memarray[i] = (long*)calloc(n,sizeof(long));
    long ans = getways(n, 3);
    printf("%ld", ans);
    return 0; }