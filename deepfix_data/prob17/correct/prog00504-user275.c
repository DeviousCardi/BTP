#include<stdio.h>
int main(){
    int n1,n2,a[20],b[20],count;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]); }
    for(int i=0;i<n2;i++){
        count=0;
        for(int j=0;j<n1;j++){
            if(b[j]==a[i+j]){
                count=count+1; }
            else
                break; }
        if(count==n2)
            break; }
    if(count==n2)
        printf("YES");
    else
        printf("NO");
    return 0; }