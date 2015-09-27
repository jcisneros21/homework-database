HomeworkDatabase::HomeworkDatabase(string className, string homework, int dueDate)
{
	this->className = className;
	this->homework = homework;
	this->dueDate = dueDate;
}

HomeworkDatabase::HomeworkDatabase()
{}

string getClass::getClass()
{
	return className;
}

string getHomework::getHomework()
{
	return homework;
}

int getDueDate::getDueDate()
{
	return dueDate;
}