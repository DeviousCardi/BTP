#include <stdio.h>
int main(){
    int a,i;
    scanf("%d\n",&a);
    int s[a],p[a],g[a];
    for(i=0;i<a;i++){
        scanf("%d", &s[i]); }
    for(i=0;i<a;i++){
        scanf("%d",&p[i]); }
    for(i=0;i<a;i++){
        g[p[i]]=s[i]; }
    for(i=0;i<a;i++){
        printf("%d",g[i]);
    printf("end");
    return 0; }