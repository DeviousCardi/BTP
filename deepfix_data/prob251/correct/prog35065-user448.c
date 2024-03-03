#include <stdio.h>
#include <stdlib.h>
long *a[3];
long count;
long getways(int x, int m) {
    if (x<1){
       return 0; }
    if(m==1){
        return 1; }
    else {
        if (m==3){
            return getways(x-5,3)+getways(x-5,2)+getways(x-5,1); }
        else if (m==2){
            return getways(x-3,2)+getways(x-3,1); }
        else if (m==1){
            return 1; } } }
int main() {
    int i,j,n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    for (i=0;i<3;i++){
        a[i]=(long*)malloc(sizeof(int)*n); }
    for (i=0;i<3;i++){
        for(j=0;j<n;j++){
            a[i][j]=-1; } }
    printf("%ld",getways(n,3)+getways(n,2)+getways(n,1));
    return 0; }