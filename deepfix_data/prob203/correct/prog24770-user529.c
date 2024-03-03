#include <stdio.h>
int main() {
    int N,i,j,flag=-1;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(arr[i]==arr[j]) {
                flag=1;
                break; } }
        if(flag==1)
            break; }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
	return 0; }