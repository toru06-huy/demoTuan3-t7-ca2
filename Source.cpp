#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b){
	int hieu=0;
	hieu =a-b;
	return hieu; 
}
int tich(int a, int b);

=======
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b) {
	return a * b;
}
>>>>>>> c4ab4667b4c303b887e5082a35047c5e35f466ff
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD
	cout<<"Tong =";
	cout << "Tich =" tich(4,5);
=======
	cout<<"Tong = "<<tong(1,2);
>>>>>>> e402e01fa4908219c88e4b65745df0e63e83dad5
	system("pause");
	return 0;
}