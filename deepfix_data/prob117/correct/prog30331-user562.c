#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==1)return 1;
    else if(n==0) return 0;
    else return 2*hanoi(n-1)+1; }
int main() {
    int i,k[100],flag=0,t,j=0;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    scanf("%d\n",&k[i]);
    for(i=0;i<t;i++) {
        while(k[i]>hanoi(j)) {
             if(hanoi(j)==k[i]) {
                printf("yes");
                flag=1;
                break; }
            j++; }
        if(flag==0)
        printf("no");
        flag=0; }
    return 0; }