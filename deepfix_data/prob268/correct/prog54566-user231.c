#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    long int d=0;
    if(m==2){
        int p,q;
        for(p=0;p<=x/3;p++){
            for(q=0;q<=x/5;q++){
                if(3*p+5*q<=x){
                    d++; } } } }
    return(d); }
int main() {
    int rup,count=0,i,j,k;
    scanf("%d",&rup);
    long ways;
    ways=getways(rup,2);
    printf("%ld",ways);
    return 0; }