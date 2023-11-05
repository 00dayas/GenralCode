# GenralCode
Just_Generic_code
######################################################################################################################################################################################################################################################################################################################################################################################################################################
-- SuperPrime
{
The purpose of the program is to find a "superprime" number from an array of integers. A "superprime" is defined as a prime number that is equal to the sum of two other numbers from the same array. Here's a breakdown of how the program works:

It takes an integer n as input, which represents the number of elements in the array.

It reads n integers into the vector V.

It then iterates through the elements of V in a loop and for each element A:

It checks if A is equal to 0 or 1 and continues to the next iteration if true (skipping 0 and 1 as they are not prime).
It counts the number of divisors of A to determine if it is a prime number. If it has exactly two divisors, it is considered prime, and the program stores it in the arr vector.
After finding all the prime numbers in the array, it enters a nested loop to check if there's a superprime number:

It iterates through the elements of the arr vector.
For each prime number in arr, it checks if there exist two other numbers from the original array V whose sum is equal to the prime number.
If such a pair of numbers is found, it sets SP (superprime) to the prime number.
It then uses the find and distance functions to find the index of the superprime number SP in the original vector V.

Finally, it prints the superprime number and its index in the original array.

The program essentially identifies prime numbers in the input array and then looks for a superprime number that satisfies the given condition. The prime numbers are stored in the arr vector, and once the superprime number is found, its value and index are printed.
}
######################################################################################################################################################################################################################################################################################################################################################################################################################################
