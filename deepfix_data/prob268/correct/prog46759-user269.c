#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int count=0;
    if(m==1) {
        count++;
        if(x%3==0)
        count++;
        if(x%5==0)
        count++;
        return count; }
     else if(m==2)
    {   count=0;
        for(int i=1;i<=x/3;i++) {
            if(x-(3*i)>0)
            count++;
            if(x-(5*i)>0)
            count++;
            for(int j=1;j<=x/3;j++) {
                if((x-5*i-3*j)>0)
                count++; }
            return count; } }
    else if(m==3&&x>8) {
        count=0;
        for(int i=1;i<=x/5;i++) {
            for(int j=1;j<=x/3;j++) {
                for(int k=1;k<=x;k++) {
                    if((x-5*i-3*j-k)>=0)
                    count++; } } }
        return count; } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3)+getways(n,2));
    return 0; }