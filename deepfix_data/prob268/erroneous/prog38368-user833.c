#include <stdio.h>
#include <stdlib.h>
int count=0;
long *memarray[3];
long getways(int x, int m) {
    if (m==1){
        count++;
        a[0]=x;
        getways(x, m+1); }
    if (m==2){
        for(int i=1; i<=(x/3); i++){
            count++; }
        getways(x, m+1); }
    if(m==3){
        for (int i=1; i<=(x/5); i++){
            for (int j=0; j<=(x-(5*i))/3; j++){
                count++; } } }
    return 0; }
int main() {
    int n;
    scanf("%d", &n);
    getways(n, 1);
    return 0; }