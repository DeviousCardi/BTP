#include <stdio.h>
#include <stdlib.h>
long *a[3];
long count;
long getways(int x, int m) {
    if (x==0){
       return 1; }
    else {
        if (m==3){
            if (x-5>=5){
                if ()
              return  getways(x-5,m)+getways(x-3,m)+getways(x-1,m); }
            else {
             return   getways(x-5,m-1)+getways(x-3,m)+getways(x-1,m); } }
        else if(m==2){
            if (x-3>=3){
             return   getways(x-3,m)+getways(x-1,m); }
            else {
             return   getways(x-3,m-1)+getways(x-1,m); } }
        else {
         return   getways(x-1,m); } } }
int main() {
    int i,j,n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    for (i=0;i<3;i++){
        a[i]=(int*)malloc(sizeof(int)*n); }
    for (i=0;i<3;i++){
        for(j=0;j<n;j++){
            a[i][j]=-1; } }
    return 0; }