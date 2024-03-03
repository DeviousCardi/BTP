#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long count=0;
void getways(int n, int m) {
    if(n==0) {
        return ; }
    else if(n<0) {
        return ; }
    else {
        if((m==3)&&(n>=5)) {
            count++;
            getways(n-5,m);
            getways(n,m); }
        if((m==2)&&(n>=3)) {
            count++;
         getways(n-3,m);
         getways(n,m); }
        if((m==1)&&(n>=1)) {
            count++;
            getways(n-1,m);
            getways(n,m); } } }
int main() {
    int n;
    scanf("%d",&n);
    getways(n,3);
    printf("%ld",count);
    for(int i=0;i<3;i++)
        free(memarray[i]);
    return 0; }