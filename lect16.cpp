#include <iostream>
#include <vector>
using namespace std;


// * => dereference operator = value of address

// &- bitwise or
//  -address of
//  -alias

// * - multiply operator
//    - dereference operator
int main(){
    // int age = 21;
    // int* agePtr = &age;
    // int** ptrAgePtr = &agePtr;

    // int** ptr=NULL;
    // int*** ptr3 = &ptrAgePtr;

    // cout << age << "\n";
    // cout << &age <<"\n";
    // cout << agePtr <<"\n";

    // cout << &agePtr <<"\n";
    // cout << ptrAgePtr <<"\n";
    // cout << ptr3 <<"\n";

    // cout << *(&age) << "\n";
    // cout << *agePtr << "\n";

    // cout<<ptr<<"\n";

    // pointer arithmetic
    //increment/decrement

    // int arr[] = {1, 2, 3, 4, 5};
    // int a =10;
    // int* aptr = &a;

    // cout << aptr <<"\n";
    // aptr--;
    // aptr = aptr + 2;
    // cout << aptr <<"\n";
    
    // Add/subtrtact
    // aptr+1 => 1int(4byte)
    // aptr+3=>3int(12byte)

    // int* ptr2;
    // int* ptr1 = ptr2+3;
     
    // cout << ptr1-ptr2 <<"\n";

    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    cout << *(ptr+1) << "\n";// 20
    cout << *(ptr+3) <<'\n';// 40
    ptr++;
    cout << *ptr <<'\n'; //20
    
    return 0;

}