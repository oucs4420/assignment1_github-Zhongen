/*
Title: OS Assignment 1
Author: Zhongen Li 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1


// function prototype for reading user specified files and count the number of lines of each
void readCountFile(string filename);


int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 0; arg < argc; ++arg){
            if (arg == 0)
                cout << "program: " << argv[arg] << '\n' ;
            else
                readCountFile(argv[arg]);
}   
    exit(0); // this means that the program executed correctly!
}

// function definition of the prototype
void readCountFile(string filename)
{
    ifstream inFile(filename);
    // if filed to open, return -1
    if(!inFile.is_open())
    {
        cout << " " << filename << ": " << "-1" << endl;
        return;
    }
    // otherwise return the number of lines in it
    string t;
    int lineCount = 0;
    while(getline(inFile, t)) lineCount += 1;
    cout << " " << filename <<  ": " << lineCount << endl;
    inFile.close();
}
