#include <iostream>
#include <vector>
#include <new>
#include "except.h"
using namespace std;

int LinearSearch(vector<int> V, int n)
{
	for(unsigned int i = 0; i < V.size(); ++i)
	{
		if(V[i] == n)
		{
			return i;
		}
	}
	try{
		throw notFound();
	}
	catch(notFound &ex){cerr << ex.what() << endl;}
}

int main()
{
	vector<int> vetor ({1, 2, 3, 4, 5, 6});
	cout << LinearSearch(vetor, 11) << endl;

	return 0;
}