#include <iostream>
#include <vector>
using namespace std;

int main(){
    // similar to an Array but dynamic in nature means size is not fixed. dynamically resized.
    // STL (Standard Template Library) - 


    //vector functions- 
    // 1. size
    // 2. push_back
    // 3. pop_back
    // 4. front
    // 5. back
    // 6. at

    // vector<int> vec;
    // vector<int> vec = {1, 2, 3};
    // vector<int> vec(3, 0);
    // cout <<vec[0];
    // cout << vec[3];

    // vector<char> alph = {'m'};
    // cout << "size= " << alph.size() << "\n";
    // alph.push_back('d');
    // alph.push_back('k');
    // // alph.pop_back();

    // cout << alph.front() << "\n";
    // cout << alph.at(2) << "\n";


    // Static vs dynamic memory allocation
    // static - at compile time / inside stack / 
    // dynamic - at running time / inside heap / 


    // vector<int> score = {};
    // score.push_back(12);
    // score.push_back(26);
    // score.push_back(33);
    // score.push_back(63);
    // cout << score.size() << "\n";
    // cout <<score.capacity()<<"\n";

    
    return 0;
}