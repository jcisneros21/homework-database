#include <iostream>
#include "HomeworkDatabase.h"

using namespace std;

template < class HomeworkDatabase>
class HomeworkArrayList
{
	private:
		
		int maxSize;
		int curr;
		int listSize;
		HomeworkDatabase* homework;
		
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
                        HomeworkDatabase *copy;
			for (int i =0; i < listSize-1; i++)
			{ 
                            int store = homework[i].getDueDate();
                            int low = 0;
			    for (int j=i; j < listSize-1; j++)
                            {
                                if ( homework[j].getDueDate() < store)
                                {
                                    store = homework[j].getDueDate();
                                    low = j;
                                }  
                            }
                            copy = &homework[i];
                            homework[i] = homework[low];
                            homework[low] = &copy
			}
                        delete copy;
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
