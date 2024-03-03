#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b.c;
scanf("%d %d %d",&a,&b,&c);
if(a+b<c||b+c<a||c+a<b){
    printf("cannot form a triangle")}
    else {
if (a*a+b*b<c*c||b*b+c*c<a*a||c*c+a*a<b*b){
    printf("obtuse triangle")}
    else{
    printf("Not Obtuse")} } }
	return 0; }