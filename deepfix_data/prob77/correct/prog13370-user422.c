#include <stdio.h>
int max(int a,int b,int i){
    if (a>=b)
    return i;
    else
    return i+1; }
    int min(int a,int b,int i){
    if (a>b)
    return i+1;
    else
    return i; }
int main() {
    int a,i,num,x,y,z,b;
    x= 0;
    y=0;
    scanf("%d",&a);
    int ppl[a+1];
    for(i=0;i<=(a-1);i++){
     scanf("%d",&num);
     ppl[i] = num; }
    for(i=0;i<=a;i++){
      x = max(ppl[i],ppl[x],i); }
    for(i=0;i<=a;i++){
      y = min(ppl[i],ppl[y],i) ; }
    z=ppl[x];
    ppl[x]=ppl[y];
    ppl[y]=z;
    for(i=0;i<a;i++){
    printf (" %d",ppl[i]); }
     printf(" %d",x);
    printf(" end");
    return 0; }