#include "Test.h"

// 텍스트 파일의 숫자들을 읽어 총합을 출력하시오.
void test()
{
	int correct = 0;
	int value = 0;

	ifstream inFile;
	inFile.open("test.txt");

	if (!inFile.is_open())
	{
		cout << "파일이 정상적으로 열리지 않았습니다." << endl;
		return;
	}

	while (true)
	{
		if (!inFile.good())
			break;

		inFile >> value;
		correct += value;
	}

	if (inFile.eof())
	{
		cout << "총합은 " << correct << endl;
	}
	else if (inFile.fail())
	{
		cout << "파일을 읽는중 에러가 있었습니다." << endl;
	}

	inFile.close();
}