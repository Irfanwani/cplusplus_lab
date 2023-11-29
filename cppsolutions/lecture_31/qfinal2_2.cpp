#include <iostream>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num < 2)
    {
        return false; // Not prime
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false; // Not prime
        }
    }
    return true; // Prime
}

// Function to find and store prime factors in an array
int *findPrimeFactors(int n, int &count)
{
    int *factors = nullptr;
    count = 0;

    for (int i = 2; i <= n; ++i)
    {
        if (n % i == 0 && isPrime(i))
        {
            ++count;
            int *temp = new int[count];
            std::copy(factors, factors + count - 1, temp);
            temp[count - 1] = i;
            delete[] factors;
            factors = temp;

            while (n % i == 0)
            {
                n /= i;
            }
        }
    }

    return factors;
}

int main()
{
    int n;
    std::cin >> n;

    if (n < 2)
    {
        std::cout << "No prime factors found for " << n << std::endl;
        return 0;
    }

    int count;
    int *primeFactors = findPrimeFactors(n, count);

    std::cout << "Prime factors of " << n << " are: ";
    for (int i = 0; i < count; ++i)
    {
        std::cout << primeFactors[i] << " ";
    }
    std::cout << std::endl;

    if (count > 0)
    {
        std::cout << "Largest prime factor of " << n << " is: " << primeFactors[count - 1] << std::endl;
    }
    else
    {
        std::cout << "No prime factors found for " << n << std::endl;
    }

    delete[] primeFactors; // Free dynamically allocated memory

    return 0;
}
