#include <stdio.h>
#include <stdlib.h>
int binomial(int a,int b){
    if (a<b)
    return 0;
    else
    if (a==0&&b==0)
    return 1;
    else
    if (a>0&&b==0)
    return 1;
    else
    return (binomial(a-1,b)+binomial(a-1,b-1)); }
int main() {
 int i,j,n,a=30,b=30;
 scanf ("%d",&n);
 for (i=0;i<=20;i++){
     for (j=0;j<=20;j++){
     if (binomial(i,j)==n){
     b=j;
     break; } }
 if (binomial(i,b)==n){
 a=i;
 break; } }
 if (a==30&&b==30){
     printf ("-1"); }
 else
 printf ("%d %d",a,b);
	return 0; }