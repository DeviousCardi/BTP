#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0){
        return 1; }
    switch(m){
        case 3:return (getways(x-5,x-5>=5?3:2)+getways(x-3,x-3>=3?2:1)+1);
        case 2:return (getways(x-3,x-3>=3?2:1)+1);
        case 1:return 1; } }
int main() {
    int n,m;
    scanf("%d",&n);
    if(n>=5){
        m=3; }
    else if(n>=3){
        m=2; }
    else m=1;
    printf("%ld",getways(n,m));
    return 0; }