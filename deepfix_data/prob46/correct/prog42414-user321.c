#include <stdio.h>
int main(){
    int i,n,m,a;
    a=1;
    scanf ("%d%d",&n,&m);
    for(i=2; i<n; i=i+1) {
     if (n%i==0)
     continue;
     a=a+1;
    if (a==m){
     printf("YES"); }
     else {
         printf("NO"); } }
    return 0; }