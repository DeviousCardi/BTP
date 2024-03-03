#include <stdio.h>
int main() {
    int i,m,n;
    int count=0;
    scanf("%d%d",&m,&n);
    for(i=2;i<n;i++) {
    if(n%i==0)
            count=count+1; }
    if(m==count){
    printf("YES");}
    else {
        printf("NO"); }
         return 0; }