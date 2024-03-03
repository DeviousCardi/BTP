#include<stdio.h>
int pro(int a,int b){
int c=a*b;
   return c; }
int main(){
int N,i,j;
scanf("%d",&N);
char str[2*N];
scanf("%s",str);
int a[N];
for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        while(str[j]!=' '){
        a[i]=str[j];
        j++; }
        i++; } }
for(i=1;i<N;i++){
int c=pro(a[i-1],a[i]);
int d=pro(c,a[i+1]); }
return 0; }