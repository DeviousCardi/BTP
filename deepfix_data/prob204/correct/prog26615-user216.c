#include <stdio.h>
#include <stdlib.h>
int count=0;
int main(){
    int a[50];
     int b[50];
    int i=0;
    int x=0;
    a[0]=1;
    while(a[i]!=0) {
        a[i]=getchar();
        i=i+1;
        count=count+1; }
        for(i=0;i<=count-1;i++){
        b[i]=a[count-i-1]; }
    for(i=0;i<=count-1;i++){
        if(a[i]==b[i]){x=x+1;} }
    if(x==count) printf("YES");
    else printf("NO");
return 0; }