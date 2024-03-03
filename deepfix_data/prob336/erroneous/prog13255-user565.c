#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,longest;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c) {
        longest=a;
        other1=b;
        other2=c; }
    else
    longest=c;
    other1=a;
    other2=b; }
    else {
        if(b>c)
        longest=b;
        other1=a;
        other2=c;
        else
        longest=c;
        other1=a;
        other2=b; }
    if(longest*longest<other1*other1+other2*other2) {
        acute triangle }
    if(longest>other1+other2) {
        printf("cannot form a triangle"); }
	return 0; }