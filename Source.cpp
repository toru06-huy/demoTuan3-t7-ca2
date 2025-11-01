#include <iostream>

using namespace std;
int hieu(int a, int b){
	int hieu=0;
	hieu =a-b;
	return hieu; 
}
int tong(int a, int b){
	return a+b;
};
int tich(int a, int b) {
	return a * b;
}
float thuong(int a, int b){
	return a/b;
};
bool kiemTraSoChanLe(int a){
	if(a%2==0) return false;
	else return true
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong = "<<tong(1,2);
	cout<<"Hieu = "<<tong(2,1);
	cout << "Tich = " tich(4,5);
	cout<<"Thuong = "<<thuong(4,2);
	if(kiemTraSoChanLe(3)) cout << "So nay la so le";
	else cout <<"So nay la so chan;"
	system("pause");
	return 0;
}