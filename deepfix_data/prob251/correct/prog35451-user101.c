#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (m==1){
        return x; }
    else if(m==2){
        if(x<3)
            return 0;
        else{
         return x/3; } }
    return getways(x,1)+getways(x,2)+getways(x,3); }
int main() {
    int n;
    long a;
    scanf("%d",&n);
    a=getways(n,3);
    printf("%l",a);
    return 0; }