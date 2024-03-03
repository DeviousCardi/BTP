#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long count;
long getways(int x, int m) {
    if (x==0){
        count++; }
    else {
        if (m==3){
            getways(x-1,m);
            getways(x-3,m);
            if (x-5>=5){
                getways(x-5,m); }
            else {
                getways(x-5,m-1); } }
        else if(m==2){
            getways(x-1,m);
            if (x-3>=3){
                getways(x-3,m); }
            else {
                getways(x-3,m-1); } }
        else {
            getways(x-1,m); } }
    return count; }
int main() {
    int i,j,n;
    scanf("%d",&n);
    printf("%d",getways(n,3));
    return 0; }