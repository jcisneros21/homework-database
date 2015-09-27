#include <iostream>
#include <string>
#include "HomeworkDatabase.h"

using namespace std;

class HomeworkArrayList
{
	private:
		
		int maxSize;
		int curr;
		int listSize;
		HomeworkDatabase *homework;
		
	public:
		
		HomeworkArrayList(int size)
		{
			maxSize = size;
			listSize = 0;
			curr = 0;
			homework = new HomeworkDatabase[size];
		}
		
		~HomeworkArrayList()
		{
			delete [] homework;
		}
		
		void append(const HomeworkDatabase& object )
		{
			homework[listSize] = object;
			listSize++;
		}
		
		void frontOfList()
		{
			curr = 0;
		}
		
		void backOfList()
		{
			curr = listSize;
		}
		
		void prev()
		{
			curr--;
		}
		
		void next()
		{
			curr++;
		}
		
		int getSize()
		{
			return listSize;
		}
		
		void sortByDate()
		{
			HomeworkDatabase *comp;
			comp = &homework[0];
			for (int i =0; i < listSize-1; i++)
			{
				if (comp->getDueDate() < homework[i+1].getDueDate())
				{
					comp = &homework[i+1];
				}		
			}
			delete comp;
		}
		
		void sortByClass()
		{
			HomeworkDatabase *comp;
			comp = &homework[0];
			for (int i =0; i < listSize-1; i++)
			{
				if (comp->getClass() < homework[i+1].getClass())
				{
					comp = &homework[i+1];
				}		
			}
			delete comp;
		}
		
		void printList()
		{
			for (int i =0; i < listSize; i++)
			{
				cout << homework[i].getClass() << "  " << homework[i].getHomework() 
				<< "  " << homework[i].getDueDate() << endl;
			}
		}
};