#include <stdio.h>
int main() {
    int k,i=0,flag=1,j,a=0,b=0,n;
    int s[200];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    gets(s);
        while(i<2*n-1){
            for(j=i+2;j<2*n-1;j=j+2){
                a=s[i];
                b=s[j];
                if(a+b==k){
                printf("lucky");
                flag=1;
                break; } }
            if(flag==1)
            break;
            i=i+2; }
        if(a+b!=k)
        printf("unlucky");
    return 0; }