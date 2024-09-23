#include <bits/stdc++.h>
using namespace std;

/*We create a boolean vector isPrime of size N+1, initialized to true.
We iterate through numbers from 2 to sqrt(N) (inclusive). 
For each prime number found (starting from 2), we mark all its multiples as not prime.
After completing the above step, we collect all remaining prime numbers from 2 to N.
Finally, we return the vector of prime numbers.*/

vector<int> sieveOfEratosthenes(int N)
 {
   vector<bool> isPrime(N + 1, true);
    vector<int> primes;

    for (int p = 2; p * p <= N; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= N; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= N; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

int main() {
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    std::vector<int> primes = sieveOfEratosthenes(N);

    std::cout << "Prime numbers up to " << N << " are:" << std::endl;
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}
