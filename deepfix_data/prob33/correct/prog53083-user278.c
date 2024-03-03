#include <stdio.h>
int main() {
int h,p,ht,i,a,b,count=1;
scanf("%d\n",&h);
scanf("%d\n",&p);
scanf("%d",&a);
while(count<=p) {
    scanf("%d",&b);
    count=count+1;
    if(a>b) {
        h=(h-(a-b));
        a=b; }
    else {
        a=b; } }
if(h<=0) {
    printf("No"); }
else {
    printf("Yes"); }
    return 0; }