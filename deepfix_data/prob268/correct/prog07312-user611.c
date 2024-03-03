#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1)
    return 1;
    if(m==2) {
        int d=x/3;
        return (d+1); }
    if(m==3) {
        int c=x/5;
        int count=0;
        for(int i=0;i<=c;c++) {
            int f;
            f=x-5*c;
            count=count+getways(f,2); }
        return count; } }
int main() {
    int n;
    scanf("%d",&n);
    long p=getways(n,3);
    printf("%li",p);
    return 0; }