#include <iostream>

using namespace std;

void Initialize();
void Print();
void Shuffle();

int Pockets[45] = { 0, };

void B()
{
	memset(Pockets, 0, sizeof(Pockets));
}


void Swap(int* A, int* B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}



int main()
{
	int A = 10;
	int B = 20;
	
	Swap(&A, &B);

	cout << A << endl;
	cout << B << endl;

	return 0;
}









void Initialize()
{
	srand(time(NULL));

	for (int i = 0; i < 45; ++i)
	{
		Pockets[i] = i + 1;
	}
}



void Shuffle()
{
	for (int i = 0; i < 45 * 1000; ++i)
	{
		int First = rand() % 45;
		int Second = rand() % 45;

		int Temp = Pockets[First];
		Pockets[First] = Pockets[Second];
		Pockets[Second] = Temp;
	}

}


void Print()
{
	for (int i = 0; i < 6; ++i)
	{
		cout << Pockets[i] << endl;
	}

	(Pockets + 2);
	&Pockets[2];
}


int A = 10;
int B = 20;
int* PA = &B;

//int* PA는 B를 주소값 가리킴23015640612
//&B 는 B의 주소값 가리킴12616501320
//*PA == 20 참조한 값?
//*PA = 30 하면 B = 30 
//


PA = &A;// 가리키는 주소 값을 A로 바꿈
*PA == 10;// 포인터 PA는 10이 됨
