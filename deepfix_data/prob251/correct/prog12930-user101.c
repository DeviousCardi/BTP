#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{   int n=x;
    int i,j,k;
    long ans=0;
    if (m==1){
        return 1; }
    else if(m==2){
        if(x<3)
            return 0;
        else{
         return x/3; } }
    else if(m==3) {
        for(i=0;i<n;i++) {
            for(j=0;j<n/3;j++) {
                for(k=1;k<n/5;k++) {
                    if((i+3*j+5*k)==x) {
                        ans=ans+1; } } } }
        return ans; } }
int main() {
    int n;
    long a;
    scanf("%d",&n);
    a=getways(n,1)+getways(n,2)+getways(n,3);
    printf("%ld",a);
    return 0; }