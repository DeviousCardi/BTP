#include <stdio.h>
int main(){
    int lucky,arr[1000],n,check;
    check=0;
    scanf("%d\n%d",&lucky,&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(int j=0;j<n;j++) {
        for(int k=0;k<n;k++) {
            if((arr[k]==lucky-arr[j])&&((lucky-arr[j])>=0)&&((lucky-arr[j])<=499)) {
                printf("lucky");
                check++;
                break; } }
        if(check) {
        break; } }
    if(check==0) {
        printf("unlucky"); }
    return 0; }