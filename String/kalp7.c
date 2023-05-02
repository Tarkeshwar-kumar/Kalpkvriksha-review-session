
/*

You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is 
empty, and '1' if it contains one ball.

In one operation, you can move one ball from a box to an adjacent box. Box i is adjacent to box j if 
abs(i - j) == 1. Note that after doing so, there may be more than one ball in some boxes.

Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the 
balls to the ith box.

Each answer[i] is calculated considering the initial state of the boxes.

*/

#include<stdio.h>

int main(){


    char boxes[100];
    scanf("%s", boxes);
    int v[100];
    int n = sizeof(boxes);
    for(int i = 0; i<n; i++){
        int steps = 0;
        for(int j = 0; j<n; j++){
            if(j != i and boxes[j] == '1'){
                steps += abs(i- j);
            }
        }
        v[i] = steps;
    }
    for(int i = 0; i<n; i++) printf("%d ", v[i]);
}