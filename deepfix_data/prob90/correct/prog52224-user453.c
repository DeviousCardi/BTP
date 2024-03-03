#include <stdio.h>
int main() {
    int num;
    int k,p;
    int list[1000];
    int i;
    if(k%2!=0) {
       for(i=0;i<num;i++) {
           for(p=i+1;p<num;p++) {
              int check=list[i]+list[p];
              if(check==k)
               printf("lucky"); } } }
    return 0; }