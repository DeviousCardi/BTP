#include<stdio.h>
int pro(int a,int b){
    int c;
    c=a*b;
    return c; }
int main() {
    int N,i,j;
    scanf("%d",&N);
    int a[N];
    int str[2*N];
    scanf("%s",str);
    for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        if(str[i]!=' '){
            a[j]=str[i];
            j++;}
        else i++; } }
    for(i=0;i<N;i++){
        int c=pro(a[i],a[i+1]);
        scanf("%d",a[i+2]);
        pro(c,a[i+2]); }
    return 0; }