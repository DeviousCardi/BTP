#include <stdio.h>
int main(){
    int i,n,m,count=0;
    scanf("%d %d",&n,&m);
 for(i=1;i<m;i++) {
     if((i!=1)&&m%i==0) {
           count++; } }
 if(count==n) {
     printf("YES\n"); }
 else {
     printf("NO"); }
        return 0; }