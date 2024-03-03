#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
 long int count=0;
int index[100];
int i=0;
long getways(int n,int cal,int point) {
    if(cal>n) {
        return 0; }
    if(cal==n) {
        index[i]=point;
        for(int j=0;j<i;j++) {
            for(int k=j+1;k<i;k++) {
                if(index[j]==index[k]) {
                  return 0; } } }
        i++;
        count++;
        return 0; }
    point++;
    return getways(n,cal+1,point)||getways(n,cal+3,point)||getways(n,cal+5,point); }
int main() {
    int n;
    scanf("%d",&n);
    getways(n,0,0);
    printf("%d",count);
    return 0; }