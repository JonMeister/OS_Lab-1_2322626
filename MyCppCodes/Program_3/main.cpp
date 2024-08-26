/*
Authors:
- Jonathan Aristizabal (202322626)
Email:
- jonathan.aristizabal@correounivalle.edu.co

Created: 08/25/2024
Last modified: 08/26/2024
 */
#include <iostream>
#include <vector>
bool isPrime(int number) {
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}

std::vector<int> getPrimesFromList(const std::vector<int>& list) {
    std::vector<int> primes;
    for (int number : list) {
        if (isPrime(number)) {
            primes.push_back(number);
        }
    }
    return primes;
}

std::vector<int> getPrimesInRange(int lowerLimit, int upperLimit) {
    std::vector<int> primes;
    for (int number = lowerLimit; number <= upperLimit; number++) {
        if (isPrime(number)) {
            primes.push_back(number);
        }
    }
    return primes;
}

int main() {
    int option;
    std::cout << "Select an option:\n"
              << "1. Check if a single number is prime.\n"
              << "2. Get the prime numbers from a list.\n"
              << "3. Get the prime numbers within a given range.\n";
    std::cin >> option;
    std::vector<int> list;
    std::vector<int> primesInRange;
    std::vector<int> primesFromList;

    switch (option) {
        case 1: {
            int number;
            std::cout << "Enter a number: ";
            std::cin >> number;
            if (isPrime(number)) {
                std::cout << "The number is prime.\n";
            } else {
                std::cout << "The number is not prime.\n";
            }
            break;
        }
        case 2: {
            int length;
            std::cout << "Enter the list length: ";
            std::cin>>length;
            for (int i=0; i < length; i++) {
                int number;
                std::cout << "Enter a number: ";
                std::cin >> number;
                list.push_back(number);
            }
            primesFromList = getPrimesFromList(list);
            std::cout << "Primes from list: \n";
            for (int number : primesFromList) {
                std::cout << number << "\t";
            }
		std::cout<<std::endl;
            break;
        }
        case 3: {
            int lowerLimit, upperLimit;
            std::cout << "Enter lower limit: ";
            std::cin >> lowerLimit;
            std::cout << "Enter upper limit: ";
            std::cin >> upperLimit;
            primesInRange = getPrimesInRange(lowerLimit, upperLimit);
            std::cout << "Primes in given range: \n";
            for (int number : primesInRange) {
                std::cout << number << "\t";
            }
                std::cout<<std::endl;

            break;
        }
        default:
            std::cout << "Invalid option.\n";
            break;
    }

    return 0;
}
