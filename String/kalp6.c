/*
Given an array of strings words, return the first palindromic string in the array. If there is no such string,
return an empty string "".

A string is palindromic if it reads the same forward and backward.

*/

#include<stdio.h>
bool isPalindrome(char *c, int n){
	int i = 0, j = n;
	while(i<=j){
		if(c[i] != c[j]){	
			
			return false;
		}
	}
	return true;
}
int main() {
    char arr[100][100];
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
        char c[100];
        
        for(int j = 0; arr[i][j] != '\0'; j++){
            c[j] = arr[i][j];
        }
        int sz = sizeof(c);
        if(isPalindrome(c, sz)) return 0;
    }
    return 0;
}