#include <stdio.h>
int main(){
    int a,b,j,c;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++)
    scanf("%d",&s[i]);
    for(int i=0;i<a;i++) {
        c=i;
        b=s[i];
        for(j=i;j<a;j++) {
            if(s[j]<b) {
                b=s[j];
                c=j; } }
        s[c]=s[i];
        printf("%d ",b); }
    printf("end");
    return 0; }