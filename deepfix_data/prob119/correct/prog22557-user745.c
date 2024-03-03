#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int s=1;
int hanoi(int n){
    if(n==0){
        return(s-1); }
    s=s*2;
 return(hanoi(n-1)); }
int main(){
    int t,n;
    scanf("%d", &t);
    int i;
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n", hanoi(n)); }
    return 0; }