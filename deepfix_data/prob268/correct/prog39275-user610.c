#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0,count1=0;
int waysfor3(int x,int m) {
        count++;
        if(x-(3*count)<3)
            return count;
        else
            return waysfor3(x,m); }
long getways(int x, int m) {
    int k,j;
    if(m==1)
        return 1;
    if((m==2)&&(x>2)) {
        k=waysfor3(x,m);
        return k; }
    if(m==3) {
        if(x<5)
            return 0;
        else {
            count1++;
            if(x-(5*count1)<3)
                return count1;
            else
                {j=waysfor3(x,m);
                return j;} } } }
int main() {
    int a=0,n,y;
    scanf("%d",&n);
    for(y=1;y<4;y++) {
        a=a+getways(n,y); }
    printf("%d",a);
    return 0; }