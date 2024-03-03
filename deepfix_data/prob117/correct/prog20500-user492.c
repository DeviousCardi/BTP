#include <stdio.h>
#include <stdlib.h>
 int toh(int a) {
    int n;
     if(a==0)
     return 0;
     else {
         n=2*toh(a-1) + 1; }
     return n; }
int main() {
    int toh(int x);
    int n,i,j,a[50];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
      scanf("%d",&a[i]);
         for(j=0;j<1000;j++) {
             if(a[i]==toh(j)) {
             printf("yes\n");
            break; }
                else {
                printf("no\n");
                break; } } }
	return 0; }