#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m) {
    int count=0;
    if(x==0){
        return 1; }
    switch(m) {
        case 3:
                if(x/5!=0)
                count=count+getways(x-5,3);
        case 2:
                if(x/3!=0)
                count=count+getways(x-2,2);
        case 1:
                count=count+1; }
    return(count); }
int main() {
    int n,count;
    scanf("%d",&n);
    int y=3;
    int x=n;
    count=getways(x,y);
    printf("%d",count);
    return 0; }