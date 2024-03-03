#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0,count5=0;
int waysfor3(int x,int m) {
        count++;
        if(x-(3*count)<3)
            return count;
        else {
            return waysfor3(x,m); } }
int waysfor5(int x,int m) {
    int k=0;
    if(x<5)
        return 0;
    else {
        k++;
        count5++;
        if((x-(5*count5))<3)
            return k;
        else {
                k=k+waysfor3(x-(5*count5),m); } } }
long getways(int x, int m) {
    int k,j;
    if(m==1)
        return 1;
    if((m==2)&&(x>2)) {
        k=waysfor3(x,m);
        return k; }
    if(m==3) {
        j=waysfor5(x,m); } }
int main() {
    int b,a=0,n,y;
    scanf("%d",&n);
    for(y=1;y<4;y++) {
        a=a+getways(n,y); }
    printf("%d",a);
    return 0; }