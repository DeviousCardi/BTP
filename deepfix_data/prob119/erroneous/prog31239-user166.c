#include <stdio.h>
#include <stdlib.h>
int count=0;
int Hanoi(int n , char f , char a , char t) {
    if(n==1) {
        count++; }
    Hanoi(n-1,f,t,a);
    count++;
    Hanoi(n-1,a,f,t);
    return count; }
int main() {
    int T,k,i;
    char f=from,a=assistant,t=to;
    scanf("%d",&T);
    for(i=0;i<T;i++) {
        count=0;
        scanf("%d",&k);
        Hanoi(k,f,a,t);
        printf("%d",count); }
	return 0; }