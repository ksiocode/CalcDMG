#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

struct FileWork
{
	string KeyTypeName;
	string Filename;
	string FolderName;
	string Extension;
	string FilePath;

	FileWork();

	FileWork(const string& KeyTypeName, const string& Filename, const string& FolderName, const string& Extension);

};



class OpenFile
{
private:
	string KeyTypeName;
	string FilePath;

public:
	OpenFile();

	OpenFile(FileWork File);
	
};
