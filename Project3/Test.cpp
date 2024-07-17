#include "Test.h"

// �ؽ�Ʈ ������ ���ڵ��� �о� ������ ����Ͻÿ�.
void test()
{
	int correct = 0;
	int value = 0;

	ifstream inFile;
	inFile.open("test.txt");

	if (!inFile.is_open())
	{
		cout << "������ ���������� ������ �ʾҽ��ϴ�." << endl;
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
		cout << "������ " << correct << endl;
	}
	else if (inFile.fail())
	{
		cout << "������ �д��� ������ �־����ϴ�." << endl;
	}

	inFile.close();
}