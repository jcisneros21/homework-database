#include <iostream>
#include <string>
#include "HomeworkArrayList.cpp"
#include "HomeworkDatabase.h"

using namespace std;

int main()
{
       // HomeworkArrayList<HomeworkDatabase> today = HomeworkArrayList<HomeworkDatabase>(50);
        int x = 12;
        HomeworkDatabase one("Programming","Chapter 1", 120);
	cout << one.getClass() << endl;
        cout << one.getHomework() << endl;
        cout << one.getDueDate() << endl;
}
