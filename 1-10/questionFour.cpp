#include<math.h>
#include<stdio.h>

// Find the largest palindrome number that's the product of two 3-digit numbers
// Solving this the hard way = there's less than a million possibilities so it's pretty cheap to do this

// only needed for numbers greater than 100k and less than 1M so we only need to validate for 6 digits
bool isPalindrome(int x) {
	return ( x%10 == x/100000 && (x/10)%10 == (x/10000)%10 && (x/100)%10 == (x/1000)%10);
}

int questionFour() {
	int max = 12321; // Handy product of 111x111 
	int temp;
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			temp = i*j;
			if (temp > 99999) {	
				if (isPalindrome(temp)) {
					max = (temp > max) ? temp : max;
				}
			}
		}
	}
	return max;
}

int main () {
	printf("The largest product of any two three-digit numbers that's a palindrome is %i \n", questionFour());
	return 0;
}
