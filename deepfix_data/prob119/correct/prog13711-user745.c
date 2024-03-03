#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int c=0;
void hanoi(int n, char A, char C, char B) {
    if(n==0)
        return 0;
    hanoi(n-1,A,B,C);
    c++;
    hanoi(n-1,B,C,A); }
int main(){
    int t,n;
    scanf("%d", &t);
    int i;
    for(i=0;i<t;i++){
        scanf("%d",&n);
        hanoi(n,'A','C','B');
        printf("%d\n",c);
        c=0; }
    return 0; }