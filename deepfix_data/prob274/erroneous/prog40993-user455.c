#include <stdio.h>
int main(){
    int n,i,p,a=0,p=0,b;
    scanf("%d\n",&n);
    int num[n];
    for(i=1;i<n;i++)
    scanf("%d",&num[i]);
    for(i=1;i<n;i++) {
       c=num[c];
        if(c==a)
       { b=i;
        break;}
            else
            {a=c;
            p++;} }
    printf("%d %d",b,p);
    return 0; }