//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//		int* DynamicArray = new int[10];
//
//		for (int i = 0; i < 10; ++i)
//		{
//			DynamicArray[i] = (i + 1) * 3;
//		}
//
//
//
//		//���� �迭�� �����Ͽ� ���� �ڷḦ �ű�
//		int* NewArray[20];
//			for (int i = 0; i < 10; ++i)
//			{
//				NewArray[i] = DynamicArray[i];
//			}
//
//				//�����ϰ� �Ⱦ��ڴ�.
//		delete[] = DynamicArray;
//		DynamicArray = nullptr;
//
//		//�̸��� �����ϰ�
//		NewArray = DynamicArray;
//		NewArray = nullptr;
//
//
//
//
//
//	
//
//
//
//
//
//
//		for (int i = 0; i < 20; ++i)
//		{
//			
//			DynamicArray[i] = (i + 1) * 4;
//
//
//			DynamicArray = nullptr;
//			
//				cout << DynamicArray[i] << endl;
//		}
//		
//		delete[] DynamicArray;
//
//
//		return 0;
//dfd
//
//}
#include <iostream>
#include <windows.h>

using namespace std;


void GotoXY(int X,int Y)
{
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
}


struct PlayerInfo // ����ü �ڷ��� : Ŀ�����ڷ��� ���� �ڷ����� ���� �� �ִ�.- �÷��̾��� ����
{
	int X;//4byt
	int Y;//4byte
	string shape;//�� 40byte
};

int main()
{
	
		
	//���ο� �ڷ��� �ڷ����� �ΰ� , �������� ������ �� �� ������ �������ε� ���� ����
	//	PlayerInfo PlayerData[10]; 
	//	new PlayerData
	//	PlayerInfo* PlayerData;

	//	PlayerData->X = 5;//����ü�� ���ٽ� -> ���
	//	PlayerData->Y = 5;
	//	PlayerData->shape="P";



	///*int PlayerX = 5;
	//int PlayerY = 5;*/


	//GotoXY(PlayerData->X, PlayerData->Y);
	//
	//cout << PlayerData->shape << endl;
	//delete PlayerData;// �����ؾ��� ��1 2 nullptr

	PlayerInfo*  PlayerData = (PlayerInfo*)(new PlayerInfo);



}

