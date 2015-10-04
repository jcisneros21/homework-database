#ifndef HomeworkDatabase_H
#define HomeworkDatabase_H
#include <string>

class HomeworkDatabase
{
	private:
	
                std::string className;
                std::string homework;
		int dueDate;
		
	public:
	
		HomeworkDatabase(const std::string className, const std::string homework, int dueDate);
		HomeworkDatabase();
                std::string getClass();
                std::string getHomework();
		int getDueDate();
};

#endif
