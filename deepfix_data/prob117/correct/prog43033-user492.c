#include <stdio.h>
#include <stdlib.h>
 int toh(int a) {
    int n;
     if(a==0)
     return 0;
     else {
         n= 2*toh(a-1) + 1; }
     return n; }
int main() {
    int k=0;
    int n,i,j,t;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
      scanf("%d\n",&t);
         for(j=0;j<50;j++) {
             if(t==toh(j)) {
             printf("yes\n");
            break; }
           else if(t<0) {
                printf("no\n");
                break; }
            else if(t!=toh(j)) {
                 k=k+1; } }
            if(k==50)
                printf("no\n"); }
	return 0; }