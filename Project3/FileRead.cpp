#include "FileRead.h"

char monsterName[50];
unsigned int atk;
unsigned int hp;
unsigned int speed;

void FileRead()
{
	cout << "���� �б� ����" << endl;

	// #1. input���� ������ �б� ���� ���� ����
	ifstream inFile;

	// #2. ������ ������ ifstream�� �ؽ�Ʈ ������ �Ѱ��־� �а� �Ѵ�. ������ �̸��� �ٸ��ٸ� ���� ���Ѵ�.
	inFile.open("OutputFile.txt");

	// #3. ������ ���������� ���ȴ��� Ȯ���Ѵ�.
	if (!inFile.is_open())
	{
		cout << "������ ���������� ������ �ʾҽ��ϴ�." << endl;
	}

	// #4. ���������� ���ȴٸ� ������ ���پ� �б� �����Ѵ�.
	inFile.getline(monsterName, 50);
	inFile >> atk;
	inFile >> hp;
	inFile >> speed;

	cout << "���� �б� ����" << endl;
	PrintInfo();
}

void PrintInfo()
{
	cout << "���� �̸� : " << monsterName << endl;
	cout << "���ݷ� : " << atk << endl;
	cout << "ü�� : " << hp << endl;
	cout << "�̵��ӵ� : " << speed << endl;
}