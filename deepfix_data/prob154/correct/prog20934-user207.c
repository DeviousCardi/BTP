#include <stdio.h>
#include <stdlib.h>
int f(int x){
float a,b;
int k=f(x);
b>=a;
if(a>=-1 && b<=1){
    k=x*x;}
else if(a>1){
    k=x*x*x;}
else if(a<-1){
    k=1;}
    return f(x); }
int main() {
float a,b,sum=0;
int n,i,j,x,r;
scanf("%f%f%d",&a,&b,&n);
if(b>=a){
if(b<-1)
for(i=1;i<=n;i++){
sum=sum+(b-a)/n; }
printf("%.4f",sum);}
else if(a>=-1 && b<=1){
for(x=1;x=n;j++){
sum=sum+f(x)*(((float)(b-a))/n); }
printf("%.4f",sum);}
else if(a>1){
    for(j=1;j<=n;j++){
    sum=sum+f(x)*(b-a)/n; }
    printf("%.4f",sum); }
	return 0; }