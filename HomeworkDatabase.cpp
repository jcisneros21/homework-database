#include "HomeworkDatabase.h"

HomeworkDatabase::HomeworkDatabase(const std::string className, const std::string homework, int dueDate)
{
	this->className = className;
	this->homework = homework;
	this->dueDate = dueDate;
}

HomeworkDatabase::HomeworkDatabase() : dueDate(){}

std::string HomeworkDatabase::getClass()
{
	return className;
}

std::string HomeworkDatabase::getHomework()
{
	return homework;
}

int HomeworkDatabase::getDueDate()
{
	return dueDate;
}
