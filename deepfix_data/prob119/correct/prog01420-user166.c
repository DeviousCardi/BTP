#include <stdio.h>
#include <stdlib.h>
int count=0;
void Hanoi(int n , char f , char a , char t) {
    if(n==0)return;
    if(n==1) {
        count++;
        return; }
    Hanoi(n-1,f,t,a);
    count++;
    Hanoi(n-1,a,f,t);
    return; }
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