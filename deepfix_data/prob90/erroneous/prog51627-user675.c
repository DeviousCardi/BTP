#include <stdio.h>
int main(){
    int a, n,m;
    int b
    scanf("%d\n", &a);
    scanf("%d\n", &n);
    m=0;
    for(int i=0;i<n;i++)
        scanf("%d", &b[i]);
    for(int i=0;i<n;i++){
        if(b[i]<a){
            for (int j=i+1;j<n;j++){
                if (b[j]==(a-b[i])){
                    m=m+1 } } } }
    if (m==0)
        printf("unlucky");
    elese
        printf("lucky");
    return 0; }