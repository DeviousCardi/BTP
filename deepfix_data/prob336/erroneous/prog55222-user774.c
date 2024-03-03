#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a+b<=c||a+c<=b||b+c<=a)
printf("Cannot form a Triangle");
else {
if(a<=c) {
    if(b<=c) {
if(a*a+b*b<=c*c)
printf("Not Acute Triangle");
else
printf("Acute Triangle"); }
else if(c<=b) {
if(a*a+c*c<=b*b)
printf("Not Acute Triangle");
else
printf("Acute Triangle"); } }
else{
    if(a<=b) {
    if(a*a+c*c<=b*b)
    printf("Not Acute Triangle");
    else
    printf("Acute Triangle"); }
else if(b<=a) {
if(b*b+c*c<=a*a)
printf("Not Acute Triangle");
else
printf("Acute Triangle"); } }
return,0; }