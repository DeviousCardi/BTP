#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int  getways(int x, int m) {
     int sum=0,i,j,k;
    static int count=0;
    if(m>3)
    return count;
    if(m==1) {
        if(x>=1)
        count++; }
   else if(m==2) {
        for( i=1; ;i++) {
                for( j=1; ;j++) {
                        if(i*1+j*3==x) {
                            count++;
                            break; } }
                if(i*1+j*3==x)
                break; } }
    else if(m==3) {
        for(i=1; ;i++) {
                for(j=0; ;j++) {
                        for(k=0; ;k++) {
                                if(5*i+j*1+k*3==x) {
                                    count++;
                                    break; } }
                            if(5*i+j*1+k*3==x)
                            break; }
                    if(5*i+j*1+k*3==x)
                    break; } }
    return getways(x,m+1); }
int main() {
    int n,i,j;
    scanf("%d",&n);
    printf("%d",getways(x,1));
    return 0; }