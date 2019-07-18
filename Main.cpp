#include <iostream>
#include <string>
#include "SmartPointer.h"

using namespace std;

class Test
{
	string mName;
public:
	Test(const char* name)
	{
		cout << "Test(const char* name)" << endl;
		mName = name;
	}
	
	void Print()
	{
		cout << mName << endl;
	}
	
	~Test()
	{
		cout << "~Test()" << endl;
	}
};

int main()
{
	SmartPointer<Test> pt(new Test("Kevin"));
	
	pt->Print();
	cout << pt.get() << endl;
	
	SmartPointer<Test> pt1(pt);
	
	pt1->Print();
	
	cout << pt.get() << endl;
	cout << pt1.get() << endl;
	
	return 0;
}