#include <stdio.h>
int main(){
    int a,i,ch;
    scanf("%d\n",&a);
    int s[a],p[a],g[a];
    ch=getchar();
    for(i=0;i<a;i++){
        s[i]=ch;
        ch=getchar(); }
    ch=getchar();
    ch=getchar();
    for(i=0;i<a;i++){
        p[i]=ch;
        ch=getchar; }
    for(i=0;i<a;i++){
        g[p[i]]=s[i]; }
    for(i=0;i<a;i++){
        putchar(g[i]);}
    printf("end");
    return 0; }