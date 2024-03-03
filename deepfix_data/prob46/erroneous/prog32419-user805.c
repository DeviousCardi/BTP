#include <stdio.h>
int main(){
 int m,n,i,count;
 count=0;
 scanf("%d,%d",&m,&n);
i=2;
for(i<n;i++)
{if((n%i)==0){
    count=count+1; } }
 if(count==m) {
     printf("YES"); }
    else {
        printf("NO"); }
    return 0; }