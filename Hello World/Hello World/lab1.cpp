#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	//Taken off ofhttps://codereview.stackexchange.com/questions/37189/euclids-algorithm-greatest-common-divisor

	int r = 0;
	int m = a;
	int n = b;
	while (n) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n == 1 || n == 2){
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
