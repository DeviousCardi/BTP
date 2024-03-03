#include<stdio.h>
int pro(int a,int b){
    int c;
    c=a*b;
    return c; }
int main() {
    int N,i,j;
    scanf("%d",&N);
    int a[N];
    char str[2*N];
    scanf("%s",str);
    for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        if(str[j]!=' '){
            a[i]=str[j];
            i++;}
        else j++; } }
    for(i=0;i<N;i++){
        int c=pro(a[i],a[i+1]);
        scanf("%d",a[i+2]);
        pro(c,a[i+2]); }
    return 0; }