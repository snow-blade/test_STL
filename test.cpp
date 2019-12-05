// c++ vector iterators source code
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vector_example;

	for (int i = 1; i <= 5; i++)
		vector_example.push_back(i);

	cout << "Output of begin and end: ";
	for (auto i = vector_example.begin(); i != vector_example.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of cbegin and cend: ";
	for (auto i = vector_example.cbegin(); i != vector_example.cend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = vector_example.rbegin(); ir != vector_example.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = vector_example.crbegin(); ir != vector_example.crend(); ++ir)
		cout << *ir << " ";

	return 0;
}
