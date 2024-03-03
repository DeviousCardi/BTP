#include <stdio.h>
#include <stdlib.h>
long combos=0;
void combo(long on,long th,long fv,int sum) {
    if(sum==(on+3*th+5*fv)) {
        combos++; }
    if(on>5) {
        combo(on-5,th,fv+1,sum);
        combo(on-3,th+1,fv,sum); } }
int main() {
    int sum;
    scanf("%d",&sum);
    combo(sum,0,0,sum);
    printf("%ld",combos); }