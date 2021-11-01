#include "Header.h"
#include "FileManager.h"
 // string stream
//#include <filesystem>




int main()
{
	const FileWork Mobs{ "Monsters", "pesca", "MonsterList", ".txt" };
	OpenFile monsterfile(Mobs);



	system("pause");
	return 0;
}