#include <stdio.h>
int max(int a,int b){
    if (a>b)
    return a;
    else
    return b; }
    int min(int a,int b){
    if (a>b)
    return b;
    else
    return b; }
int main() {
    int a,i,num,x,y,z;
    scanf("%d",&a);
    int ppl[a+1];
    for(i=0;i<=a;i++){
     scanf("%d",&num);
     ppl[i] = num; }
    for(i=0;i<=a;i++){
      x = max(ppl[i],ppl[i+1]); }
    for(i=0;i<=a;i++){
      y = min(ppl[i],ppl[i+1]) ; }
    z=x;
    x=y;
    y=z;
    for(i=0;i<=a;i++){
    printf ("%d",ppl[i]); }
    printf("end");
    return 0; }