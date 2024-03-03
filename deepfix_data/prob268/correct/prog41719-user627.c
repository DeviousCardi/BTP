#include <stdio.h>
#include <stdlib.h>
long getways(int,int);
long total(int);
long *memarray[3];
long getways(int x, int y) {
    if(y==1) {
        return 1; }
    if(y==3) {
        if(x<3) {
            return 0; }
        else if(x==3) {
            return 1; }
        else {
            return 1+total(x-3); } }
    if(y==5) {
        if(x<5) {
            return 0; }
        else if(x==5) {
            return 1; }
        else {
            return 1+total(x-5); } }
    return 0; }
long total(int x) {
    return getways(x,1)+getways(x,2)+getways(x,3); }
int main() {
    int x,c;
    scanf("%d",&x);
    c=total(x);
    printf("%d",c);
    return 0; }