#include <stdio.h>
#include <stdlib.h>
long count =0;
long *memarray[3];
long getways(int x, int m) {
    if (m==1)
    return 1;
    if (m==2)
    return x/2;
     if (m==3) {
      for(i=1;i<3;i=i+1) {
            for(j=1;j<=x/3;j=j+1) {
                count=count+getways(x-3*j,i) } }
    return count; } }
int main() {
    int n;
    long value;
    scanf ("%d",&n);
    value=getways(n,1)+getways(n,2)+getways(n,3);
    printf ("%d",value);
    return 0; }