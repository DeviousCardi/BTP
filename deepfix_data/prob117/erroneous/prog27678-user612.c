#include <stdio.h>
#include <stdlib.h>
long int moves_for(int i) {
    if(i==1)
    return 1;
    else
    return 2*moves_for(i-1); }
int main() {
    int t,n,count=0,p=0;
    scanf("%d",&t);
    while(count<t) {
        scanf("%d",&n);
        for(i=0;i<100;i++) {
        if(moves_for(i)-1==n) {
            p=1;
            break; } }
        if(p==1) {
            printf("yes"); }
        else {
            printf("no"); }
        count++; }
	return 0; }