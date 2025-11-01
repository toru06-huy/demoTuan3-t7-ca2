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
};
int hieu(int a, int b);
int tich(int a, int b) {
	return a * b;
}
<<<<<<< HEAD
>>>>>>> c4ab4667b4c303b887e5082a35047c5e35f466ff
float thuong(int a, int b);
=======
float thuong(int a, int b){
	return a/b;
};
>>>>>>> fa5874fc694be203229b2dbec30d89d08723f62c
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong = "<<tong(1,2);
	cout << "Tich =" tich(4,5);
	cout<<"Thuong = "<<thuong(4,2);
	system("pause");
	return 0;
}