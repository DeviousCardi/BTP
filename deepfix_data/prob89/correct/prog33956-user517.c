#include <stdio.h>
int main() {
    int k,i=0,j,a=0,b=0,n;
    int s[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    gets(s);
     printf("%s",s);
        while(i<n-1){
            for(j=i+1;a+b==k;j++){
                s[i]=a;
                s[j]=b;
                if(a+b==k){
                printf("lucky");
                break; } }
            i++; }
        if(a+b!=k)
        printf("unlucky");
    return 0; }