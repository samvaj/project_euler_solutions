#include <math.h>
#include <stdio.h>

//Find the largest prime factor of 600851475143


/* This algorithm takes the number, continuously increments trying to find larger prime numbers, and divides the total by the number each time it finds it (and resets i to equal 3 in case a prime is included twice). This is assuming the number in itself is not prime, which then guarantees that the number has a prime factor greater than itself in it. This also dodges the prime composite dlimemma when you realize if the number it's trying is not prime, any factors would already have been divided out  */

long int questionThree() {
	long int prime = 600851475143;
	long int max = 1;
	for (long int i = 3; i < (prime) && i <  sqrt(600851475143); i++) { 
		if (prime%i == 0) { // If the number (presumably prime, or a 
			if (i > max) {
				max = i; // new largest prime number
			}
			prime = prime/i; // pull the factor out
			i = 3; // reset the number
		}
	
	}
	if (prime > max) {
		max = prime;
	}
	return max;
}

int main() {
	printf("The greatest prime factor of 600851475143 is %li \n", questionThree());
}
