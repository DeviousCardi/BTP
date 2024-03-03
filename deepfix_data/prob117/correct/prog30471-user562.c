#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==1)return 1;
    else if(n==0) return 0;
    else return 2*hanoi(n-1)+1; }
int main() {
    int i,j,k,flag=0;
    scanf("%d\n",&k);
    while(k>hanoi(i)) {
       if(hanoi(i)==k) {
          flag=1;
           break; }
        i++; }
    return 0; }