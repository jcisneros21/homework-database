#include <iostream>
#include <string>
#include "HomeworkArrayList.cpp"
#include "HomeworkDatabase.h"

using namespace std;

int main()
{
        HomeworkArrayList<HomeworkDatabase> today = HomeworkArrayList<HomeworkDatabase>(50);
        int x = 12;
        HomeworkDatabase one("Programming","Chapter 1", 20);
        HomeworkDatabase two("Anthropology","Write Paper", 30);
        HomeworkDatabase three("Theology", "Read Matthew", 25);
	cout << one.getClass() << endl;
        cout << one.getHomework() << endl;
        cout << one.getDueDate() << endl;
        today.append(one);
        today.append(two);
        today.append(three);
        cout << today.getSize() << endl;
        today.printList();
        today.sortByDate();
        today.printList();
}
