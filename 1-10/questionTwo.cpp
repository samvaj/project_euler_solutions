#include <stdlib.h>
#include <iostream>

// Question Two: Sum of all even fibonacci numbers below 4,000,000

int questionTwo() {
	int count = 0;
	int fib[3] = {0,0,1};
	while (fib[2] < 4000000) {
		fib[0] = fib[1];
		fib[1] = fib[2];
		fib[2] = fib[0]+fib[1];
		if (fib[2]%2 == 0) {
			count += fib[2];
		}
	}
	return count;
}

int main () {
	printf("The answer sum of all even fibonacci numbers below 4,000,000 is: %i \n", questionTwo());
	return 0;
}
