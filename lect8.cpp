#include <iostream>
#include <climits>
using namespace std;

// int smValue(int arr[], int size){
//     int small = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]<small){
//             small = arr[i];
//         }
//     }
//     return small;

// }

// int largest(int arr[], int size){
//     int large = arr[0];
//     for(int i = 0; i<size; i++){
//         large = max(arr[i], large);
//     }
//     return large;
// }

// pass by reference
//  void changeArr(int arr[], int size){
//      for(int i=0; i<size; i++){
//          arr[i] = 2*arr[i];
//      }
//  }

// Linear Search - Time Complexity - O(n)
// int linearSearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }


//Reverce an array - two pointer approach
// void reverseArray(int arr[], int size){
//     int start = 0, end = size-1;
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }



//homework Q-1-i - sum of all element in an array
int sumOfAll(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

//homework Q-1-ii - product of all element in an array
int productOfAll(int arr[], int size){
    int product = 1;
    for(int i=0; i<size; i++){
        product *= arr[i];
    }
    return product;
}


// homework Q-2 - swapping the maximum and minimum element of an array
void swapMinMax(int arr[], int size){
    int minINDEX = 0, maxINDEX =0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] < arr[minINDEX]))
        {
            minINDEX = i;
        }
        if ((arr[i] > arr[maxINDEX]))
        {
            maxINDEX = i;
        }
        
    }

    
    swap(arr[minINDEX], arr[maxINDEX]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}



//homework Q-3 - print alll unique values in an array
void uniquevalues(int arr[], int size){
    for(int i=0; i < size; i++){
        bool isUnique = true;
        for(int j=0; j<size; j++){
            if (i==j)
            {
                continue;
            } else if(arr[i]==arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
    cout <<"\n";
}


// homework Q-4 - intersection of two arrays
void intersection(int arr1[], int size1, int arr2[], int size2){
    for (int i=0; i<size1; i++) {
        for (int j=0; j<size2; j++) {
            if (arr1[i]==arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }
}


int main()
{
    // int score[5] = {10, 20, 12, 34, 11};
    // for (int i = 0; i < sizeof(score) / sizeof(int); i++)
    // {
    //     cout << score[i] << " ";
    // }

    // int arr[] = {1, 2, 3, 4, 5, 7, -2};
    // int size = sizeof(arr) / sizeof(int);
    // cout << smValue(arr, size);

    // int size = 5;
    // int marks[size];;

    // for(int i = 0; i < size; i++){
    //     cin >> marks[i];
    // }

    // for(int i = 0; i < size; i++){
    //     cout << marks[i] << " ";
    // }

    // int arr[] = {12, 3, 4, 500, 6, 90};
    // int size = sizeof(arr) / sizeof(int);

    // cout << largest(arr, size) << " ";

    // pass by reference
    // int arr[] = {1, 2, 3};
    //  changeArr(arr, 3);

    //  cout << "in main\n";
    //  for(int i=0; i<3; i++){
    //     cout << arr[i] <<" ";
    //  }
    //  cout << "\n";

    // linear search
    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int size = sizeof(arr) / sizeof(int);
    // int target = 4;

    // cout << linearSearch(arr, size, target) << "\n";



    //reverseArray - using two pointer approach
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = 5;

    // reverseArray(arr, size);

    // for(int i=0; i < size; i++){
    //     cout << arr[i] << " ";
    // }



    int arr[] = {1, 2, 3, 6, 7, 8, 7, 1, 8};
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 3, 1};
    int size = sizeof(arr) / sizeof(int);


    cout << sumOfAll(arr, size) << "\n";
    cout << productOfAll(arr, size) <<"\n";
    swapMinMax(arr, size);
    uniquevalues(arr, size);
    intersection(arr1, 5, arr2, 4);

    return 0;
}