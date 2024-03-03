#include <stdio.h>
int max(int a,int b,int i,int x){
    if (a>=b)
    return i;
    else
    return x; }
int min(int a,int b,int i,int y){
    if (a<=b)
    return i;
    else
    return y; }
int main() {
    int a,i,num,x,y,z;
    x= 0;
    y=0;
    scanf("%d",&a);
    int ppl[a+1];
    for(i=0;i<=(a-1);i++){
     scanf("%d",&num);
     ppl[i] = num; }
    for(i=0;i<a;i++){
      x = max(ppl[i],ppl[x],i,x); }
    for(i=0;i<a;i++){
      y = min(ppl[i],ppl[y],i,y) ; }
    z=ppl[x];
    ppl[x]=ppl[y];
    ppl[y]=z;
    for(i=0;i<a;i++){
    printf (" %d",ppl[i]); }
     printf(" %d %d",ppl[x],ppl[y]);
    printf(" end");
    return 0; }