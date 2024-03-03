#include <stdio.h>
#include <stdlib.h>
int count=0;
long *memarray[3];
long getways(int x,int m) {
    if(x<0)
    return 0;
    if(x==0)
    return 1;
    if(m==1){
    return 1; }
    else if(m==2){
      int t=x/3,c=0;
      for(int i=1;i<=t;i++)
      c+=getways(x-i*3,1);
      return c; }
    else {
        int t1=x/5,t2=x/3;
        for(int i=1;i<=t1;i++){
            for(int j=0;j<=t2;j++){
             return getways(x-i*5-j*3,1); } } } }
int main() {
    int n;
    scanf("%d",&n);
    count+=getways(n,1)+getways(n,2)+getways(n,3);
    printf("%d\n",count);
    return 0; }