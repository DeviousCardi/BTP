#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int s=1;
void hanoi(int n){
    if(n==0){
        printf("%d",s-1);
        return; }
    s=s*2;
    hanoi(n-1); }
int main(){
    int t,n;
    scanf("%d", &t);
    int i;
    for(i=0;i<t;i++){
        scanf("%d",&n);
         }hanoi(n);
    return 0; }