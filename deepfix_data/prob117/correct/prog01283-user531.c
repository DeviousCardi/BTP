#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return hanoi(n-1)+1; }
int main() {
    int t,n,i=0;
    scanf("%d",&t);
    while(t--)
        {   int f=0;
            scanf("%d",&n);
            while(n>=hanoi(i++))
            if(n==hanoi(i-1)) {
               printf("yes\n");
               f=1; }
            if(f==0)
           printf("no\n"); }
	return 0; }