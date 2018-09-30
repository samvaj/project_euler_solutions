#include<math.h>
#include<stdio.h>

// Finding the sum of all primes below 2 million
// A sieve can work and we'll just eat memory for breakfast

long int questionTen() { // Just in case
	long int sum = 0; // Interestingly, one is not prime
	bool primes[2000000] = {false}; // 2 megs should be possible
	for (int i = 2; i <= 2000000; i++) { // we'll shift it back, but this seems to be more logical to me.
		if (!primes[i-1]) {
			sum += i;
			for (int j = i; j < 2000000; j+=i) {
				primes[j-1] = true;
			}
		}

	}
	return sum;
}


int main () {
	printf("The sum of all primes below 2,000,000 is %li\n", questionTen());
	return 0;
}
