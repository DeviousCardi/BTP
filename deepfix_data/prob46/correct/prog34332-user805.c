#include <stdio.h>
int main(){
 int m,n,i,count;
 count=0;
 scanf("%d,%d",&n,&m);
for(i=1;i<n;i++)
{if((n%i)==0){
    count=count+1; }
else {
    count=count; } }
 if(count==m) {
     printf("YES"); }
    else {
        printf("NO"); }
    return 0; }