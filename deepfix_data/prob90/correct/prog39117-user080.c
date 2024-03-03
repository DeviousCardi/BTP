#include <stdio.h>
int main(){
    int k,i,j,p,q,t;
    int s[1000];
    scanf("%d\n%d",&k,&i);
    for(j=0;j<i;j=j+1) {
     scanf("%d",s[j]); }
    for(p=0;p<i;p=p+1) {
      for(q=0;q<i;q=q+1) {
          t=s[p]+s[q]; } }
     if(t==k) {
              printf("Lucky"); }
          else{printf("unlucky");}
    return 0; }