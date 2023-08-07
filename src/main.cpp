#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	ifstream ProgramList;
	string Command("start \"\" ");
	string Path;

	try
	{
		ProgramList.open("ProgramList.txt");
		if(!ProgramList.is_open())
			throw runtime_error("Can not read programs list!");
	}
	catch (const exception& e)
	{
		cout << "Exeption caught: " << endl;
		cerr << e.what() << endl;
		cout << "\nPress enter to exit...";
		getchar();
		return 1;
	}

	ProgramList >> noskipws;

	while (!ProgramList.eof())
	{
		getline(ProgramList, Path);
		cout << Command + Path << endl;
		system((Command + Path).c_str());
	}
	ProgramList.close();
	return 0;
}