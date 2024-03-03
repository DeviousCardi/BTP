#include<stdio.h>
int pro(int a,int b){
    int c;
    c=a*b;
    return c; }
int main() {
    int N,i,d;
    scanf("%d",&N);
    int str[2*N];
    scanf("%s",str);
    for(i=0;i<N;i=i+4){
        int d=pro(str[i],str[i+2]); }
    printf("%d",d);
    return 0; }