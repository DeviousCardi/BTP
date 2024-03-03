#include <stdio.h>
int main() {
    int a=0,b=0,k,i,j,n;
     int s[100];
     scanf("%d\n",&k);
     scanf("%d\n",&n);
    gets(s);
    i=0;
    while(i<n){
        a=s[i];
        j=i+1;
        while(j<n){
            b=s[i+1];
            if(a+b==k){
                printf("lucky");
                break; }
            j++; }
        i++; }
    if(a+b!=k)
    printf("unlucky");
    return 0; }