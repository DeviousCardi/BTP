#include <stdio.h>
int main() {
    int a=0,b=0,p=0,k,flag=0,i,j,n;
    int s[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    i=0;
    for(p=0;p<n;p++){
        scanf("%d",&s[p]); }
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
    if(flag==0)
    printf("unlucky");
    return 0; }