// C++ program to illustrate the
// element accesser in vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g;

	for (int i = 1; i <= 10; i++)
		g.push_back(i * 10);

	cout << "\nReference operator [g] : g[2] = " << g[2];

	cout << "\nat : g.at(4) = " << g.at(4);

	cout << "\nfront() : g.front() = " << g.front();

	cout << "\nback() : g.back() = " << g.back();

	// pointer to the first element
	int* pos = g.data();

	cout << "\nThe first element is " << *pos;
	return 0;
}
