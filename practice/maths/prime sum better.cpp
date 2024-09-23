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
    cout << "Enter the value of N: ";
    cin >> N;

    vector<int> primes = sieveOfEratosthenes(N);

    cout << "Prime numbers up to " << N << " are:" << endl;
    int sum=0;
    for (int prime : primes) {
    	sum+=prime;
        
    }
    cout << sum << " ";
    cout << endl;

    return 0;
}
