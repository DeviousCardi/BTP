#include <stdio.h>
#include <stdlib.h>
void tower(int n, char p,char q,char r) {
    if(n==1) {
        printf("n disk from %c to %c",&p,&q);
        return ; }
    if(n>1) {
        printf("n disk from %c to %c",&p,&r);
        tower(n-1, p , r, q); }
    else
    printf("n disk from %c to %c",&r,&q);
    tower(n-1, r , q , q); }
int main() {
    int n;
    scanf("%d",&n);
    tower(n ,'A','B','C');
    return 0; }