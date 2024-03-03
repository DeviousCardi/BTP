#include <stdio.h>
int main() {
    int a=0,b=0,k,flag,i,j,n;
    int s[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    gets(s);
    i=0;
    while(i<n){
        a=s[i];
        j=i+1;
        while(j<n){
            b=s[j];
            if(a+b==k){
                printf("lucky");
                flag=1;
                break; }
            j++; }
        if(flag==1);
        break;
        i++; }
    if(a+b!=k)
    printf("unlucky");
    return 0; }