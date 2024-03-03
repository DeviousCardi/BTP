#include <stdio.h>
int main() {
 int m,n;
 int count;
 scanf("%d",&m);
 scanf("%d",&n);
 count=0;
 for(int i=2;i<n;i++) {
        if(n%i==0) {
            count=count+1; } }
 if(m==count) {
     printf("YES"); }
 else {
    printf("NO"); }
    return 0; }