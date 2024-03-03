#include <stdio.h>
int main(){
    int i,n,m,count=0;
    scanf("%d %d",&n,&m);
 for(i=1;i<n;i++) {
     if(n%i==0) {
           count++; } }
 count--;
 if(count==m) {
     printf("YES\n"); }
 else {
     printf("NO"); }
        return 0; }