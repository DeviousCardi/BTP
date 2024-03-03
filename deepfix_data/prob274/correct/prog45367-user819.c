#include <stdio.h>
int main(){
    int n=0,i=0,j=0;
    int list[100];
    int seq[100];
    scanf("%d",&n);
    while(i<n){
    scanf("%d",&list[i]);
    i++; }
    int k=1;
    seq[0]=1;
    seq[k]=list[0];
    for (j;j<n;j++){
          int m = seq[k];
          seq[k+1]=list[m]; }
    for(int z=0;z<n;z++){
        printf("%d",seq[z]); }
    return 0; }