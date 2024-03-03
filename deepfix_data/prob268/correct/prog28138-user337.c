#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1) {
        return x; }
    if(m==2) {
         return (x/3); }
    if(m==3) {
        return (x/5); } }
int main() {
    int n;
    scanf("%d",&n);
    int f_1=getways(n,1);
    int f_2=getways(n,2);
    int f_3=getways(n,3);
    int S=f_1+f_2+f_3;
    printf("%d",S);
    return 0; }