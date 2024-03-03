#include <stdio.h>
#include <stdlib.h>
int hanoi(int discs) {
    int m;
    if(discs==1)
    m=1;
    else
    m=2*hanoi(discs-1)+1;
    return m; }
int main() {
int testcases,i=0,input;
scanf("%d\n",&testcases);
while(i<20) {
    scanf("%d\n",&input);
    printf("%d",hanoi(input));
    i++; }
return 0; }