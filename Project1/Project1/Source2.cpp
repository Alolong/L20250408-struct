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
//		//새로 배열을 생성하여 기존 자료를 옮김
//		int* NewArray[20];
//			for (int i = 0; i < 10; ++i)
//			{
//				NewArray[i] = DynamicArray[i];
//			}
//
//				//삭제하고 안쓰겠다.
//		delete[] = DynamicArray;
//		DynamicArray = nullptr;
//
//		//이름을 대입하고
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


struct PlayerInfo // 구조체 자료형 : 커스텀자료형 여러 자료형을 담을 수 있다.- 플레이어의 정보
{
	int X;//4byt
	int Y;//4byte
	string shape;//약 40byte
};

int main()
{
	
		
	//새로운 자료형 자료형이 두개 , 정적으로 생성할 수 도 있지만 동적으로도 생성 가능
	//	PlayerInfo PlayerData[10]; 
	//	new PlayerData
	//	PlayerInfo* PlayerData;

	//	PlayerData->X = 5;//구조체에 접근시 -> 사용
	//	PlayerData->Y = 5;
	//	PlayerData->shape="P";



	///*int PlayerX = 5;
	//int PlayerY = 5;*/


	//GotoXY(PlayerData->X, PlayerData->Y);
	//
	//cout << PlayerData->shape << endl;
	//delete PlayerData;// 복습해야할 것1 2 nullptr

	PlayerInfo*  PlayerData = (PlayerInfo*)(new PlayerInfo);



}

