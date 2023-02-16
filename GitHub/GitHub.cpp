#include <iostream>
#include<unordered_set>

using namespace std;

template<typename T>
void printCont(const T& cont)
{
	for (auto& i : cont)
	{
		cout << "\t" << i;
	}
	cout << endl;
}
int main()
{
	unordered_set<int> s{ 10,5,6,8 };
	printCont(s);
	cout << "Heloo" << endl;
	cout << "Start" << endl;
    
}

