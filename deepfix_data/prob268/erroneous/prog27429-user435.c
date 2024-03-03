#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int arr[]={1,3,5};
long getways(int x, int m) {
   if (x>0&&m>0) *(*(memarray+m)+x)=getways(x,m-1)+getways(x-a[m],m);
   else if (m==0||x==0) return 1;
   else return 0; }
int main() {
    int n; scanf("%d",&n);
    for (int i=0;i<3;i++) memarray[i]=(long *)malloc(n*sizeof(long));
    for (int i=0;i<3;i++) *(*memarray+i)=1;
    getways(n,2);
    printf("%d",*(*(memarray+2)+n));
    return 0; }