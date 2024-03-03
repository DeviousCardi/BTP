#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0;
int index[100];
int point=1;
int i=0;
long getways(int n,int cal) {
    if(cal>n) {
        return 0; }
    if(cal==n) {
        ++count;
        index[i]=point;
        i++;
        for(int j=0;j<i;j++) {
            for(int k=j+1;k<i;k++) {
                if(index[j]=index[k]) {
                  --count;
                  index[i]=0; } } }
        return 0; }
    point++;
    return getways(n,cal+1)||getways(n,cal+3)||getways(n,cal+5); }
int main() {
    int n;
    scanf("%d",&n);
    getways(n,0);
    printf("%d",count);
    return 0; }