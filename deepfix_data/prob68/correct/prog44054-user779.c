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
pro(a[0],a[1]);
printf("%d",pro(a[0],a[1]));
return 0; }