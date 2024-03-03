#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
 long int kd[3];
void getways(int x, int m,int k,int p) {
    if(k==x) {
        printf("%d/n",x);
        p++;
        return; }
    if(k>x) {
        printf("%d\n",p);
        return; }
    int i=0;
    while(i<2) {
        k=k+kd[i];
        getways(x,m+1,k,p);
        i++; } }
int main() {
    long int n;
    scanf("%ld",&n);
    kd[0]=1;
    kd[1]=3;
    kd[2]=5;
    getways(n,0,0,0);
    return 0; }