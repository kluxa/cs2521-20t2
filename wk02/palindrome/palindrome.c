
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str);

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <string>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	bool result = isPalindrome(argv[1]);
	printf("%s\n", result ? "yes" : "no");
}

/*
PSEUDOCODE:
isPalindrome(A):
	Input  array A[0..n-1] of characters
	Output true if A is a palindrome, false otherwise


*/

bool isPalindrome(char *A) {
	return false;
}
















// bool isPalindrome(char *A) {
// 	int l = 0;
// 	int r = strlen(A) - 1;
// 	while (l < r) {
// 		if (A[l] != A[r]) {
// 			return false;
// 		}
// 		l++;
// 		r--;
// 	}
// 	return true;
// }
