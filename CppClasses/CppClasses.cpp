// CppClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    int size = 0;
    vector <int> values;

public:
    
    //void setSize(int x) {
    //    size = x;
    //}
    int length() {
        return size;
    }
    void enqueue(int x) {
        values.push_back(x);
        size++;
    }


};


int main()
{
    //std::cout << "Hello World!\n";
    printf("Hello World!\n");

    Queue line;
    printf("The length of line is %d\n", line.length());
    line.enqueue(6);
    printf("The length of line is now %d\n", line.length());

    return 0;
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
