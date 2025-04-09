#include <string>
#include <iostream>

int main()
{
	//initialize
	int Pockets[45] = { 0, };
	for (int i = 0; i < 45; ++i)
	{
		Pockets[i] = i + 1;
	}

	//shuffle
	
	for (int i = 0; i < 45; ++i)
	{
		Pockets[i] = i + 1;
	}

	int A = 10;
	//int* ;//인수의 변수의 위치를 기록 - 숫자를 기억 못한다. int와의 관계는 없으니 독립적으로 봐야한다.

		printf(" %x\n", &A);

	//int* A = 10; // intA가 어디인지 기억하는 것

}



