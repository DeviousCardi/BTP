#include <stdio.h>
int main() {
    int i,m;
    int count;
    scanf("%d%d",&m,&i);
    for(i=2;i<m;i++){
    if(m%i==0) {
        count=count+1;
                printf("yes"); }
 else  {
    printf("no"); } }
         return 0; }