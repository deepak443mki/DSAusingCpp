#include <iostream>
using namespace std;

// sum of two numbers
//  int sum(int a, int b){
//      return a+b;
//  }

// int minOfTwo(int a, int b){
//     if(a<b){
//         return a;

//     } else {
//         return b;
//     }
// }

// int Nsum(int number){
//     int sum = 0;
//     for (int i = 1; i <= number; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int Nfactorial(int number){
//     int factorial = 1;
//     for (int i = number; i >= 1; i--)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int fun(){
//     return 3;
//     cout << "Hello World";
// }

// void changeX(int x){
//     x = 2*x;
//     cout << "x: " <<x;
// }

// int sumOfDigit(int number)
// {
//     int digiSum = 0;
//     int lastDigi;
//     while (number > 0)
//     {
//         lastDigi = number % 10;
//         number = number / 10;
//         digiSum += lastDigi;
//     }
//     return digiSum;
// }

// int factorial(int number){
//     int fact = 1;
//     for (int i = number; i >= 1; i--)
//     {
//         fact *= i;
//     }
//     return fact;

// }

// int ncr(int n, int r){
//     int value = factorial(n)/(factorial(r)*factorial(n-r));
//     return value;
// }

//  check number is prime or not
// void primeCheck(int number)
// {
//     bool isPrime = true;
//     for (int i = 2; i * i < number; i++)
//     {
//         if (number % i==0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if (number<0)
//     {
//         cout << "number is -ve";
//     } else if (isPrime)
//     {
//         cout << "Prime";
//     } else {
//         cout << "not prime";
//     }

// }

// void printPrime(int n)
// {
//     bool isPrime = true;
//     for (int i = 2; i <= n; i++)
//     {
//         bool isPrime = true;
//         for (int j = 2; j * j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime)
//         {
//             cout << i << " ";
//         }
//     }
// }



// fibonacci number
void fibonacciSeries(int n){
    int i = 0;
    int j = 1;
    int fib_num = 0;
    while (fib_num <= n){
        cout << fib_num << " ";
        fib_num = i+j;
        i = j;
        j = fib_num;
    }
    
}
int main()
{
    //     cout << sum(6, 9) << "\n";
    //     cout << minOfTwo(7, 9);
    // cout << Nsum(10) << "\n";
    // cout << Nfactorial(5) <<"\n";
    // fun();
    // int x = 5;
    // changeX(5);

    // cout << "x: " << x;

    // cout << "sum:" << sumOfDigit(369) <<"\n";

    // int n = 8;
    // int r = 2;
    // cout << n<<"C"<< r<< ":" << ncr(n, r);

    // int num = 41;
    // primeCheck(num);
    // printPrime(50);
    fibonacciSeries(50);

    return 0;
}