#include <stdio.h>
int main(){
    int i,n,m,a;
    a=0;
    scanf ("%d%d",&m,&n);
    for(i=2; i<n; i=i+1) {
     if (n%i==0)
     a=a+1;
     continue; }
    if (a==m){
     printf("YES"); }
     else {
         printf("NO"); }
    return 0; }