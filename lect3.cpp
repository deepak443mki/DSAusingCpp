// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = -15;

//     if (i > 0) {
//         cout << "number is positive\n";
//     } else {
//         cout << "number is negative\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // int age;
    // cout << "Enter you age: \n";
    // cin >> age;

    // if(age>18){
    //     cout << "You  can vote\n";
    // } else {
    //     cout << "You can't vote\n";
    // }

    // int n;
    // cout << "Enter a number:\n";
    // cin >> n;

    // if(n%2==0){
    //     cout << "Number is even\n";
    // } else {
    //     cout << "number is odd\n";
    // }

    // int marks;
    // cout << "Enter marks:\n";
    // cin >> marks;

    // if(marks >= 90){
    //     cout << "A\n";
    // } else if (marks>=80 && marks <90){
    //     cout << "B\n";
    // } else if (marks >= 70 && marks<80){
    //     cout << "C\n";
    // }else {
    //     cout << "FAIL\n";
    // }

    // find character uppercase or lowercase
    // char ch;
    // cout << "Enter a char: \n";
    // cin >> ch;

    // if (ch>=97 && ch<=122){ //  ch>='a' && ch<='z'
    //     cout << "lowercase\n";
    // } else if(ch>=65 && ch<=90) { //ch>='A' && ch<='Z'
    //     cout << "UPPERCASE\n";
    // } else {
    //     cout <<"not an alphabet\n";
    // }

    // //Ternary ststement
    // int n;
    // cout << "Enter a number :\n";
    // cin >> n;
    // n>=0 ? cout << "POSITIVE": cout << "NEGATIVE";

    // LOOPS
    // int i=1;
    // while (i<=5){
    //     cout << i << "\n";
    //     i++;
    // }

    // for (int i = 1; i < 10; i++)
    // {
    //     cout <<i << " ";
    // }

    // int sum = 0;
    // for (int i = 1; i <= 50; i++)
    // {
    //     sum += i;
    // }
    // cout<<"Sum: " << sum;

    // for (int i = 0; i < 10; i++)
    // {
    //     if(i==5){
    //         // break;
    //         continue;
    //     }
    //     cout<<i;
    // }

    // for (int i = 0; i < 20; i++)
    // {
    //     if (i%2!=0) {
    //         cout << i << " ";
    //     }
    // }

    // int oddSum = 0;
    // for (int i = 1; i < 10; i=i+2)
    // {
    //     oddSum +=i;
    // }
    // cout<<"sum: " <<oddSum;

    // is prime????
    // int num;
    // bool isPrime = true;
    // cout << "Enter a number: \n";
    // cin >> num;
    // if (num < 0){
    //     cout << "Please enter positive number.\n";
    // }else if (num == 1){
    //     isPrime = false;
    // }else{
    //     for (int i = 2; i*i < num; i++){
    //         if (num % i == 0){
    //             isPrime = false;
    //             break;
    //         }
    //     }
    // }
    // if (isPrime){
    //     cout << "prime";
    // }
    // else{
    //     cout << "not a prime";
    // }


    // nested loop
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout <<"* ";
        }
        cout << " \n";
        
    }
    

    return 0;
}