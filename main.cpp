#include <iostream>
using namespace std;

// my version 2

int getSumma(int x, int y)
{
	return (x+y);
}

int main(int argc, char** argv) 
{
	int a,b,c;
	
	cin >> a >> b;
	
	c = getSumma(a,b);
	cout << c;
	
	
	
	return 0;
}
