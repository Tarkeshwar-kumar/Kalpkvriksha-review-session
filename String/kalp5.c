/*
You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.

*/
#include<stdio.h>

int main() {

    char arr[100][100];
    int height[100];
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++){
        char name[100];
        scanf("%s\n", name);
        for(int j = 0; name[j] != '\0'; j++){
            arr[i][j] = name[j];
        }
    } 
    for(int i = 0; i<n; i++){
        scanf("%d", &height[i]);
    }
    int max = -1;
    int idx = -1;
    for(int i = 0; i<n; i++){
        for(int i = 0; i<n; i++){
            if(height[i] > max){
                max = height[i];
                idx = i;
            }
        }
        if(idx != -1){
            for(int j = 0; arr[idx][j] != '\0'; j++){
                printf("%c", arr[idx][j]);
            }
            height[idx] = -1;
            max = -1;
            idx = -1;
            printf("\n");
        }
    }
}