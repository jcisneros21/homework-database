#include <string>
using namespace std;

class HomeworkDatabase
{
	private:
	
		string className;
		string homework;
		int dueDate;
		
	public:
	
		HomeworkDatabase(string className, string homework, int dueDate);
		HomeworkDatabase();
		string getClass();
		string getHomework();
		int getDueDate();
};