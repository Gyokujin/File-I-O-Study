#include "FileRead.h"

char monsterName[50];
unsigned int atk;
unsigned int hp;
unsigned int speed;

void FileRead()
{
	cout << "파일 읽기 시작" << endl;

	// #1. input으로 파일을 읽기 위해 변수 선언
	ifstream inFile;

	// #2. 변수로 선언한 ifstream에 텍스트 파일을 넘겨주어 읽게 한다. 파일의 이름이 다르다면 읽지 못한다.
	inFile.open("OutputFile.txt");

	// #3. 파일이 정상적으로 열렸는지 확인한다.
	if (!inFile.is_open())
	{
		cout << "파일이 정상적으로 열리지 않았습니다." << endl;
	}

	// #4. 정상적으로 열렸다면 파일을 한줄씩 읽기 시작한다.
	inFile.getline(monsterName, 50);
	inFile >> atk;
	inFile >> hp;
	inFile >> speed;

	cout << "파일 읽기 시작" << endl;
	PrintInfo();
}

void PrintInfo()
{
	cout << "몬스터 이름 : " << monsterName << endl;
	cout << "공격력 : " << atk << endl;
	cout << "체력 : " << hp << endl;
	cout << "이동속도 : " << speed << endl;
}