#include "FileWrite.h"

void FileWrite()
{
	// #1. output으로 파일을 제작하기 위해 변수 선언
	ofstream outFile;

	// #2. 변수로 선언한 ofstream을 열어서 파일 쓰기를 시작한다. 보통 이 시점에서 프로젝트에 텍스트 파일을 파일을 생성한다.
	outFile.open("OutputFile.txt");

	// #3. cpp 파일에서 생성한 문자열을 ofstream에 작성한다.
	char inputS[50];
	unsigned int inputI;

	// Monster Name
	cout << "몬스터 이름 : ";
	cin >> inputS;
	outFile << inputS << endl;

	// Atk
	cout << "공격력 : ";
	cin >> inputI;
	outFile << inputI << endl;

	// HP
	cout << "체력 : ";
	cin >> inputI;
	outFile << inputI << endl;

	// Speed
	cout << "이동속도 : ";
	cin >> inputI;
	outFile << inputI << endl;

	// #4. 작성한 파일을 닫아 입력을 종료한다.
	outFile.close();
}