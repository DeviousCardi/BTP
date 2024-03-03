#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
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
            if(x-(3*i)>0)
            count++;
            if(x-(5*i)>0)
            count++;
            for(int j=1;j<=x/3;j++) {
                if(x==(5*i+3*j))
                count++; }
            return count; } }
    else if(m==3) {
        count=0;
        for(int i=1;i<=x/5;i++) {
            for(int j=1;j<=x/3;j++) {
                for(int k=1;k<=x;k++) {
                    if((x==(5*i+3*j+k)))
                    count++; } } }
        return count; } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3)+getways(n,2)+getways(n,1));
    return 0; }