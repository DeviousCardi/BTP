#include <stdio.h>
#include <stdlib.h>
long  getways(int x, int m) {
   long count=0;
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
            if((x-(3*i))>0)
            count++;
            if((x-(5*i))>0)
            count++;
            for(int j=1;j<=x/5;j++) {
                if(x==(5*j+3*i))
                count++; } }
        return count; }
    else if(m==3) {
        count=0;
        for(int i=1;i<=x/5;i++) {
            for(int j=1;j<=x/3;j++) {
                for(int k=1;k<=x;k++) {
                    if((x==(5*i+3*j+k)))
                    count++; } } }
        return count; } }
int main() {
    long int n;
    scanf("%ld",&n);
    printf("%ld",getways(n,2)+getways(n,1)+getways(n,3));
    return 0; }