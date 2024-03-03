#include <stdio.h>
int main() {
    int k,i=0,j,a=0,b=0,n;
    int s[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    gets(s);
        while(i<n-1){
            for(j=i+2;a+b==k;j=j+2){
                s[i]=a;
                s[j]=b;
                if(a+b==k){
                printf("lucky");
                break; } }
            i=i+2; }
        if(a+b!=k)
        printf("unlucky");
    return 0; }