#include <stdio.h>
#include <stdlib.h>
long getways(int,int);
long *memarray[3];
long getways(int x, int y) {
    if(x<1) {
        return 0; }
    if(y==1) {
        return 1; }
    if(y==2) {
        if(x<3) {
            return 0; }
        else if(x==3) {
            return 1; }
        else {
            return getways(x-3,1)+getways(x-3,2); } }
    if(y==3) {
        if(x<5) {
            return 0; }
        else if(x==5) {
            return 1; }
        else {
            return getways(x-5,1)+getways(x-5,2)+getways(x-5,3);; } }
    return 0; }
int main() {
    int x,c;
    scanf("%d",&x);
    c=getways(x,1)+getways(x,2)+getways(x,3);
    printf("%d",c);
    return 0; }