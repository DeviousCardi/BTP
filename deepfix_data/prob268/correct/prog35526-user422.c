#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int a =0;
long getways(int x, int m) {
    if(m==2){
        int r = x/3;
        if(r!=0)
        return r+1;
        else
        return 1; }
    else{
        int f= x/5;
        int d= x%5;
        if((d<3)&&(d!=0)){
            for(int i=1;i<=f;i++){
                a=a+ getways(x-(i*f),m-1); } }
        if(d>3){
            for(int i=1;i<=f;i++){
                a=a+ 2*getways(x-(i*f),m-1); } }
        if(d==0){
            for(int i=1;i<f;i++){
                a=a+ getways(x-(i*f),m-1); } }
        if(f==0)
        a= 3;
        return a; } }
int main() {
    int n;
    scanf("%d",&n);
    int q=getways(n,3);
    printf("%d",q);
    return 0; }