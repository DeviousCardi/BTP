#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[50],b[50];
    int i=0;
    while(ch!=eof) {
        a[i]=getchar();
        i=i+1;
        count=count+1; }
    for(i=0;i<=count-1;i++){
        b[i]=a[n-i-1]; }
    for(i=0;i<=count-1;i++){
        if(a[i]==b[i]){x=x+1;} }
    if(x==count){printf("YES");}
    else printf("NO");
return 0; }