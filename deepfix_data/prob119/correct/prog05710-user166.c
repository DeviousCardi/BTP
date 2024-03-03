#include <stdio.h>
#include <stdlib.h>
int count=0;
int Hanoi(int n , char f , char a , char t) {
    if(n==0) {
        count=0; }
    if(n==1) {
        count=1; }
    if(n>1) {
       Hanoi(n-1,f,t,a);
    count++;
    Hanoi(n-1,a,f,t);}
    return count; }
int main() {
    int T,k,i;
    char f='a',a='b',t='c';
    scanf("%d",&T);
    for(i=0;i<T;i++) {
        count=0;
        scanf("%d",&k);
        Hanoi(k,f,a,t);
        printf("%d\n",count); }
	return 0; }