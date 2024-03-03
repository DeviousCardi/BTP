#include <stdio.h>
int main(){
    int a,b,c,i,k,j;
    scanf("%d",&a);
    scanf("%d",&b);
    int s[b];
    for(i=0;i<b;i++){
        scanf("%d",&s[i]); }
    c=0;
    for(i=0;i<b;i++){
        k=s[i];
        for(j=i+1;j<a;j++){
            if(s[j]==k-1) printf("lucky");
            c=1;
            break; } }
    if(c==0) printf("unlucky");
    return 0; }