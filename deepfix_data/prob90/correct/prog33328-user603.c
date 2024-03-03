#include <stdio.h>
int main(){
    int lucky,n,check;
    check=0;
    scanf("%d\n%d",&lucky,&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(int j=0;j<n;j++) {
        for(int k=0;k<n;k++) {
            if(((lucky-arr[j])>0)&&((lucky-arr[j])<499)&&(arr[k]==lucky-arr[j])) {
                printf("lucky");
                check=1;
                break; } }
        if(check==1) {
        break; } }
    if(check==0) {
        printf("unlucky"); }
    return 0; }