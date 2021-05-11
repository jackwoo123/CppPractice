// vectorPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
void iterate(vector<int> nums) {
    int i = 0;
    for (i = 0; i < nums.size(); i++) {
        cout << "The num at index " << i << " is " << nums.at(i) << "\n";
    }
}

    
    



int main()
{
    
    //declare the array
    vector<int> nums;
    //push back puts the element at the end of the array
    nums.push_back(1);
    nums.push_back(2);

    iterate(nums);
    printf("Why ever use cout any ways?");
    return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
