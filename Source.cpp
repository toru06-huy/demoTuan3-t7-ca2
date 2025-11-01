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
<<<<<<< HEAD
}int chiaLayDu(int a, int b){
	return a%b;
}
=======
};
bool kiemTraSoChanLe(int a){
	if(a%2==0) return false;
	else return true
}

bool kiemTraNguyenTo(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false; 
    }
    return true;
}


>>>>>>> 62ccb38e42c7d38361e381956ae298a1718d0bb9
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong = "<<tong(1,2);
	cout<<"Hieu = "<<tong(2,1);
	cout << "Tich = " tich(4,5);
	cout<<"Thuong = "<<thuong(4,2);
<<<<<<< HEAD
	cout<<"a chia b du "<<chiaLayDu(9,5);
system("pause");
=======
	if(kiemTraSoChanLe(3)) cout << "So nay la so le";
	else cout <<"So nay la so chan;"
	system("pause");
>>>>>>> 62ccb38e42c7d38361e381956ae298a1718d0bb9
	return 0;
}
