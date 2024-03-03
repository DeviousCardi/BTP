#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c,max,min1,min2;
scanf("%d%d%d",&a,&b,&c);
if (a>b){
    max=a;
    min1=b; }
else {
    max=b;
    min1=a; }
if(max>c){
    min2=c; }
else {
    min2=max;
    max=c; }
if(max>=min1+min2){
    printf("Cannot form a Triangle"); }
else{
    if (max*max<min1*min1 + min2*min2)
    {printf("Acute Triangle");}
    else
    printf("Not Acute Triangle"); }
	return 0; }