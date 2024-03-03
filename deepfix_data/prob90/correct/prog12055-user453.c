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
    if(k%2!=0) {
       for(i=0;i<num;i++) {
           for(p=i+1;p<num;p++) {
              int check=list[i]+list[p];
              if(check==k)
               printf("lucky"); } } }
    return 0; }