#include <iostream>
using namespace std;
#define UP 72
#define DOWN 80
#define RIGHT 75
#define LEFT 77
#define SPACE 32
void Show(int** field, int a) {
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "0" << ends;
		}
		cout << endl;
	}
}


void MovePlus(int** field, int a) {

}

void MoveToPlus(int** field, int a) {

}

void Initialize(int** field, int a) {

}
int main()
{
	int N = 40;
	int** field = new int* [50];
	Show(field, N);
}
