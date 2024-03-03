#include <stdio.h>
int main() {
    int num;
    int k,p,j;
    int list[1000];
    scanf("%d",&num);
    scanf("%d",&k);
    for(j=0;j<num;j++)
     scanf("%d",&list[j]);
    int i;
    int flag=0;
    if(k%2!=0) {
       for(i=0;i<num;i++) {
           for(p=i+1;p<num;p++) {
              int check=list[i]+list[p];
              if(check==k)
               int flag=1; } } }
     if(flag==1)
      printf("lucky");
     else
      printf("unlucky"); }
    return 0; }