// Given an integer n, return the number of prime numbers that are strictly less than n.

 

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0
// ----------------------------------------------------------------------------------------------------

//original
//-----------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <cmath>
// using namespace std;

// class Solution {
// public:
//     // Function to check if a number is prime
//     bool prime(int n) {
//         if (n <= 1) {
//             return false;  // 0 and 1 are not prime numbers
//         }
//         int limit = sqrt(n);  // Calculate sqrt(n) once
//         for (int i = 2; i <= limit; i++) {
//             if (n % i == 0) {
//                 return false;  // If divisible by i, n is not prime
//             }
//         }
//         return true;
//     }

//     // Function to count the number of prime numbers less than n
//     int countPrimes(int n) {
//         int c = 0;
//         for (int i = 2; i < n; i++) {  // Loop from 2 to n-1
//             if (prime(i)) {  // Check if i is prime
//                 c++;  // Increment the count
//             }
//         }
//         return c;
//     }
// };
//--------------------------------------------------------------------------------------------------



//opt
//-------------------------------------------------------------------------------------------------
#include <iostream>
#include <vector>  // For using a dynamic array (vector)
using namespace std;

class Solution {
public:
    // Function to count the number of prime numbers less than n
    int countPrimes(int n) {
        // If n is less than or equal to 2, there are no primes less than n
        if (n <= 2) {
            return 0;
        }

        // Create a boolean vector initialized to true, indicating all numbers are prime initially
        // `isPrime[i]` will be true if `i` is prime, false otherwise
        vector<bool> isPrime(n, true);

        // 0 and 1 are not prime numbers, so mark them as false
        isPrime[0] = isPrime[1] = false;

        // Apply the Sieve of Eratosthenes algorithm
        // Loop through numbers starting from 2 up to sqrt(n) (i * i < n)
        for (int i = 2; i * i < n; i++) {
            // If `i` is still marked as prime
            if (isPrime[i]) {
                // Mark all multiples of `i` starting from `i^2` as non-prime (false)
                // We start from `i^2` because smaller multiples will have been already marked by smaller primes
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Count the number of prime numbers
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;  // Increment the count if `i` is prime
            }
        }

        return count;  // Return the total number of primes less than n
    }
};

int main() {
    Solution sol;
    int num;
    
    // Input the value of n
    cout << "Enter a number: ";
    cin >> num;

    // Output the number of primes less than num
    cout << "Number of primes less than " << num << ": " << sol.countPrimes(num) << endl;

    return 0;
}
