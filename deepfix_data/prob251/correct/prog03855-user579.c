#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    static long count=0;
    if(m>3)
        return count;
    if(m==1)
        count++;
    if(m==2) {
        for(int i=0;i<=x;i++) {
            for(int j=1;j<=x;j++) {
                if(i*1+j*3==x) {
                    count++; } } } }
    if(m==3) {
        for(int i=0;i<=x;i++) {
            for(int j=0;j<=x;j++) {
                for(int k=1;k<=x;k++) {
                    if(k*5+i*1+j*3==x) {
                        count++; } } } } }
    return getways(x,m+1); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<3;i++) {
        memarray[i]=(long*)malloc(n*sizeof(long)); }
    printf("%ld",getways(n,1));
    return 0; }