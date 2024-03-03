#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int n,int a,int b,int c) {
    if(n==0)
    return 0;
    if(n>0) {
        hanoi(n-1,a,c,b);
        hanoi(1,a,b,c);
        hanoi(n-1,b,a,c);
        return (n-1,c,b,a); }
    else
    return 0; }
int main() {
   int test,cases,a,b,c,i;
   scanf("%d\n",&test);
   for(i=0;i<test;i++) {
    scanf("%d\n",&cases);
    if (hanoi (100,a,b,c)){
        printf("YES\n");}
        else{
            printf("NO"); } }
	return 0; }