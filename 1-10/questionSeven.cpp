#include<math.h>
#include<stdio.h>

// Finding the 10,001st prime/
//
// Doing this by brute force should work, but it might take a little bit - a few small optimizations will save dramatically though. O(n^2):  O(n) to get to the nth prime, and O(n) to validate the numbers are prime is surprisingly cheap when you only have 10001 primes.
// The other way we could solve this is with a sieve, but it'd take a considerable amount of memory

int questionSeven() {
	int prime = 3;
	int count = 2;
	bool valid = true;
	int i =3;
	while (count < 10001) {
		i += 2;
		valid = true;
		for (int j = 3; j < sqrt(i)+1; j+= 2) { // only need to increment by 2
			if (i%j == 0) {
				valid = false;
				break;
			}
		}
		if (valid) {
			prime = i;
			count++;
		}
	}
	return prime;
}


int main () {
	printf("The 10,001st prime is %i\n", questionSeven());
	return 0;
}
