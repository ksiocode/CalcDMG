#include "FileManager.h"



FileWork::FileWork() {}

FileWork::FileWork(const string& KeyTypeName, const string& Filename, const string& FolderName, const string& Extension)
{
		this->KeyTypeName = KeyTypeName;
		this->Filename = Filename;
		this->FolderName = FolderName;
		this->Extension = Extension;
		this->FilePath = this->FolderName + "//" + this->Filename + this->Extension;
}



OpenFile::OpenFile() {}

OpenFile::OpenFile(FileWork File)
{
		this->KeyTypeName = File.KeyTypeName;
		this->FilePath = File.FilePath;

		ifstream fin;

		char texto[300];
		fin.open(this->FilePath);
		fin.getline(texto, 300);

		cout << "Lendo do Arquivo: " << texto << endl;
		fin.close();

}
