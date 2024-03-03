#include <stdio.h>
int main() {
    int n1,arr1[25],n2,arr2[25],i,j,flag=0;
    scanf("%d",n1);
    for(i=0; i<n1; i++) {
            scanf("%d", arr1[i]); }
    scanf("%d", n2);
    for(i=0; i<n2; i++) {
            scanf("%d", arr2[i]); }
    if(n1>=n2) {
            for(i=0; i<n1; i++) {
                    if(arr1[i]==arr2[0])
                        {   i++;
                            for(j=1; j<n2; j++, i++)
                                if(arr[j]==arr[i])
                                    flag=1;
                                else
                                    flag=0; } } }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
	return 0; }