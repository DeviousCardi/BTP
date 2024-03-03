#include <stdio.h>
int diff(int,int);
int main(){
    int a[400];
    int i=0,j=0,p=0,n=0,c=0;
    scanf("%d",&n);
    c=2*n-1;
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2*n;i++){
        for(j=0;j<2*n;j++){
            if((a[i]==a[j])&&(i!=j)){
                p=diff(i,j);
                if(c>p)
                c=p;
                break; } } }
    printf("%d",c);
    return 0; }
int diff(int i,int j){
  if(i>j)
  return i-j;
  else
  return j-i ;}