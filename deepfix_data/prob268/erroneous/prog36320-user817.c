#include <stdio.h>
#include <stdlib.h>
#define ptmax 3
long *memarray[3];
void printarr(long memarray[],int x) {
    int m;
    for(m=0;m<x;m++) {
        scanf("%d",&memarray[m]); } }
long getways(int x, int m) {
    if(x==0) {
        printarr(*memarray,m); }
    else if(x>0) {
        int k;
        for(k=0;k<=ptmax;k++) {
            memarray[m]=k; }
        getways(x-k,m+1); } }
int main() {
 getways(x,0);
 getchar();
    return 0; }