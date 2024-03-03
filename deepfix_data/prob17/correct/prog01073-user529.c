#include <stdio.h>
int main() {
    int N1,N2,i,pos=-1,j,flag=1;
    scanf("%d",&N1);
    int arr1[N1];
    for(i=0;i<N1;i++)
        scanf("%d",&arr1[i]);
    scanf("%d",&N2);
    int arr2[N2];
    for(i=0;i<N1;i++) {
        if(arr1[i]==arr2[0]) {
            pos=i;
            break; } }
    if(pos==-1)
        flag=-1;
    else {
        for(i=pos,j=0;i<(pos+N2-1);i++) {
            if(arr1[i]!=arr2[j])
                flag=-1;
            j++; } }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
	return 0; }