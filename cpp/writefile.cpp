#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout; 
    fout.open("test.txt");
    // in windows
    fout << "write something" << "\r\n";
    // in linux
    fout << "write something1" << endl;
    fout.close();
    return 0;

}
