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

bool kiemTraNguyenTo(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false; 
    }
    return true;
}


int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong = "<<tong(1,2);
	cout<<"Hieu = "<<tong(2,1);
	cout << "Tich = " tich(4,5);
	cout<<"Thuong = "<<thuong(4,2);
	system("pause");
	return 0;
}