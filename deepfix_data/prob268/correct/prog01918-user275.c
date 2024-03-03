#include<stdio.h>
long **memarray[3];
long getways(int x, int m){
    if(x==0)
        return 1;
    if(m==1)
        return 1;
    if(m==2){
        if(x<3)return 0;
        else return getways(x-3,1)+getways(x-3,2); }
    if(m==3){
        if(x<5)return 0;
        else return getways(x-5,1)+getways(x-5,2)+getways(x-5,3); } }
int main(){
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,2)+getways(n,3));
    return 0; }