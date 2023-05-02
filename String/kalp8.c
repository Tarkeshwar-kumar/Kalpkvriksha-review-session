/*

We have n chips, where the position of the ith chip is position[i].

We need to move all the chips to the same position. In one step, we can change the position of the ith chip from position[i] to:

position[i] + 2 or position[i] - 2 with cost = 0.
position[i] + 1 or position[i] - 1 with cost = 1.
Return the minimum cost needed to move all the chips to the same position.

*/

#include<stdio.h>

int main(){
    int arr[100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++) scanf("%d", &arr[i]);

    int e = 0;
    int o = 0;
    for (int i = 0; i<n; i++) {
        if (arr[i] % 2 == 0) e++; 
        else o++;
    }
    int ans = o;
    if(e<o) ans = e;
    printf("%d", ans);

}