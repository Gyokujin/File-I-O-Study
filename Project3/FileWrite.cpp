#include "FileWrite.h"

void FileWrite()
{
	// #1. output���� ������ �����ϱ� ���� ���� ����
	ofstream outFile;

	// #2. ������ ������ ofstream�� ��� ���� ���⸦ �����Ѵ�. ���� �� �������� ������Ʈ�� �ؽ�Ʈ ������ ������ �����Ѵ�.
	outFile.open("OutputFile.txt");

	// #3. cpp ���Ͽ��� ������ ���ڿ��� ofstream�� �ۼ��Ѵ�.
	char inputS[50];
	unsigned int inputI;

	// Monster Name
	cout << "���� �̸� : ";
	cin >> inputS;
	outFile << inputS << endl;

	// Atk
	cout << "���ݷ� : ";
	cin >> inputI;
	outFile << inputI << endl;

	// HP
	cout << "ü�� : ";
	cin >> inputI;
	outFile << inputI << endl;

	// Speed
	cout << "�̵��ӵ� : ";
	cin >> inputI;
	outFile << inputI << endl;

	// #4. �ۼ��� ������ �ݾ� �Է��� �����Ѵ�.
	outFile.close();
}