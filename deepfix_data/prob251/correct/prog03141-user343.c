#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (x<0)  return 0;
    if (x==0) return 1;
    if (m<=0) return 0;
    if (memarray[m-1][x-1]!=-1) {
        return memarray[m-1][x-1]; } }
int main() {
    long int n;
       scanf("%ld",&n);
    int i,j;
    for (i=0;i<3;i++)
        memarray[i]=malloc(n*sizeof(long *));
    for (i=0;i<3;i++) {
        for (j=0;j<n;j++) {
            memarray[i][j]=-1; } }
    printf("%ld",getways(n,3));
    for (i=0;i<3;i++)
      free(memarray[i]);
    return 0; }