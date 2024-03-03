#include <stdio.h>
int main(){
    int m,n;
    int i;
    int count;
    scanf("%d%d",&m,&n);
    for(i=2,count=0;i<n;i++) {
      if(n%i==0)
      count=count+1; }
 if(count==m) {
     printf("YES"); }
 else {
     printf("NO"); } }
    return 0; }