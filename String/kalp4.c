/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.
*/


#include<stdio.h>

int main(){
    char string[100];
    int n; 
    scanf("%d\n", &n);
    int ans = -1;

    while(n--){

        scanf("%[^\n]%*c", string);
        printf("%s\n", string);
        int tmp = 0;
        for(int i = 0; string[i] != '\0'; i++){
            int k = i;
            while(string[i] != '\0' && string[i] != ' ') i++;
            tmp++;
            while(string[i] != '\0' && string[i] == ' ') i++;
            i--;
        }
        if(tmp > ans) ans = tmp;
    }
    printf("%d", ans);
}
 