#include <stdio.h>
int check(int a[],int idx1,int len,int idx2,int sumi,int sumf){
    if(len==1)
    return 0;
    if(len>1||len==0){
        if(idx1<idx2){
          sumi=sumi+a[idx1];
          sumf=sumf+a[idx2];
          if(sumi>sumf){
            idx2=idx2-1;
          len=len-1;
          check(a,idx1,len,idx2,sumi,sumf); }
          else if(sumi<sumf){
              idx1=idx1+1;
              len=len-1;
              check(a,idx1,len,idx2,sumi,sumf); }
         else if(sumi==sumf) } } }
int main() {
    int n,i,sumi,sumf;
    scanf("%d\n",&n);
    int a[30];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    sumi=0;
    sumf=0;
    check(a,0,n,n-1,sumi,sumf);
    return 0; }