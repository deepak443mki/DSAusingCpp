#include <iostream>
using namespace std;


int smValue(int arr[], int size){
    int small = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<small){
            small = arr[i];
        }
    }
    return small;
    
}
int main(){
    // int score[5] = {10, 20, 12, 34, 11};
    // for (int i = 0; i < sizeof(score) / sizeof(int); i++)
    // {
    //     cout << score[i] << " ";
    // }
    

    int arr[] = {1, 2, 3, 4, 5, 7, -2};
    int size = sizeof(arr) / sizeof(int);
    cout << smValue(arr, size);

    return 0;
}