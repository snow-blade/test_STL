#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector_example;

    for (int i = 1; i <= 5; i++)
        vector_example.push_back(i);

    cout << "Size : " << vector_example.size();
    cout << "\nCapacity : " << vector_example.capacity();
    cout << "\nMax_Size : " << vector_example.max_size();

    // resizes the vector size to 4
    vector_example.resize(4);

    // prints the vector size after resize()
    cout << "\nSize : " << vector_example.size();

    // checks if the vector is empty or not
    if (vector_example.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector
    vector_example.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = vector_example.begin(); it != vector_example.end(); it++)
        cout << *it << " ";

    return 0;
}
