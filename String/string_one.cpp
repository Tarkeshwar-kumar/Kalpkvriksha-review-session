#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int mp[26] = {0};
void isPalindrome(char *c, int n){
	int i = 0, j = n;
	while(i<=j){
		if(c[i] != c[j]){	
			printf("string is not palindrome\n");
			return;
		}
	}
	printf("String is palindrome\n");
}
void countUnique(char *c, int n){
	for(int i = 0; i<n; i++){
		mp[c[i]- 'a'] += 1;
	}
	int count = 0;
	for(int i = 0; i<26; i++){
		if(mp[i] > 0)
			count++;
	}
	printf("%d\n", count);
}
void singleOccur(char* c, int n){
	int x=0;
	for(int i = 0; i<n; i++){
		x = x^(c[i] - 'a');
	}
	printf("%c\n", 'a'+ x);
}
int main() {
        char c[100];
        scanf("%s", c);
	    int n, i;
	    for( i = 0; c[i] != '\0'; i++){}
	    n = i;
	    isPalindrome(c,n);
	    countUnique(c, n);
        singleOccur(c, n);
}
