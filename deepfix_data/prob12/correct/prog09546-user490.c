#include <stdio.h>
int min(int a, int b){
    if(a>b){
        return b;}
        else {
            return a;} }
int main(){
    int k;
    scanf("%d",&k);
    int s[2*k];
    int i;
    for(i=0;i<2*k;i=i+1){
        scanf("%d",&s[2*k]); }
    int d[100],f;
    int a,b;
    for(a=0;a<2*k;a=a+1){
        for(b=0;b<2*k;b=b+1){
            if(s[a]==s[b]){
                for(f=0;f<2*k;f=f+1){
                    d[f]=(b-a);
                    break; }
                break; } } }
    int e= min(d[0], d[1]);
     int g= min(d[2], d[3]);
      int h= min(e,g);
      printf("%d",h);
    return 0; }