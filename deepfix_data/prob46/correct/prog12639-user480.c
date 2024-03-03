#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    int i=2;
    int count=0;
    while(i*i<=n)
    {i++;
    if (n%i!=0) {
     continue; }
    else {
     count++; } }
    if(n==2*count){
      printf("YES");}
    else
     {printf("NO");}
    return 0; }