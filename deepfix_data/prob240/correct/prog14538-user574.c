#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
        return 1;
    int i=0,c=0;
    for(i=0;i<=n;++i) {
            c=c+((catalan(i))*(catalan(n-i))); }
    return c; }
void func(int t) {
    int i=0,flag=0;
    do {
            if(catalan(i+1)>t) {
                    printf("%d",catalan(i));
                    flag=1; }
            ++i;
        }while(flag==0); }
int main() {
    int num,t;
    scanf("%d\n",&num);
    int i=0;
    for(i=0;i<num;++i) {
            scanf("%d\n",&t);
            func(t); }
	return 0; }