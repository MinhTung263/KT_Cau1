#include <iostream>
#include <cmath>
using namespace std;

class DaGiac{
	private:
		int SoCanh;
		float ChieuDai[100];
	public :
		void Nhap();
		void Xuat();
		float ChuViDaGiac();
			
};
void DaGiac::Nhap(){
	cout << "Nhap so canh cua da giac:"; 
	cin >> SoCanh;
	for (int i = 0; i <SoCanh; i++)
	{
		cout << "Nhap canh thu " << i+1<< ": ";
		cin >> ChieuDai[i];
	}
}
void DaGiac::Xuat(){
	cout<<"Cac thong tin da nhap la: ";
		for (int i = 0; i <SoCanh; i++)
	{
		cout<<ChieuDai[i]<<"\t";
	}
	
}
float DaGiac::ChuViDaGiac()
{
	float chuVi = 0;
	for (int i = 0; i <SoCanh; i++)
	{
		chuVi += ChieuDai[i];
	}
	return chuVi;
}
int main(){
	DaGiac dagiac;
	dagiac.Nhap();
	dagiac.Xuat();
	cout << "\nChu vi da giac la:" << dagiac.ChuViDaGiac() <<" Cm"<< endl;
}
