#include<math.h>
#include<stdio.h>

// Finding the difference between (1 + ... 100)^2 and 1^2 + ... 10%2
// Brute force should work .. one shortcut is that we know 1 .. + 100 is 101*50

int questionSix() {
	int squareOfSum = (101*50);
	squareOfSum *= squareOfSum;
	int difference = squareOfSum;
	for (int i = 1; i <= 100; i++) {
		difference -= (i*i);
	}
	return difference;
}


int main () {
	printf("The difference between the square of the sum of one through one hundred and the sum of the squares of one one through one hundred is equal to %i  \n", questionSix());
	return 0;
}
