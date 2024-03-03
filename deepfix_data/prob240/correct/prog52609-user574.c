#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
        return 1;
   int c;
   c=(((4*n)-2)/(n+1))*catalan(n-1);
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
    printf("%d",catalan(0));
	return 0; }