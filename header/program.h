#include <string>

using std::string;

class program 
{
    string Name;
    string Path;
public:
    program();
    program(string name, string path);
    void start();
};