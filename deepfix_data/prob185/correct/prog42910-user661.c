#include <stdio.h>
int jarpulavath(int boobs,int chut,int kalpna,int pooja[]){
    if (kalpna==0) return 0;
    int i,s=0,thurky=0;
    for(i=chut-kalpna;i<chut;i++){
        s=s+pooja[i];
        if(s==boobs) thurky=1; }
    if(thurky==1) return 1;
    else {
        jarpulavath(boobs,chut,kalpna-1,pooja); } }
int main() {
    int i,boobs,chut,a,b,pooja[30],gaand;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&pooja[i]); }
    gaand=jarpulavath(b,a,a,pooja);
    if(gaand==1) printf("YES");
    else printf("NO");
    return 0; }