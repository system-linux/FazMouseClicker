#include<iostream>
#include<FazMouse.hh>
#include<clocale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	
	cout<<"FazClicker'a hoþgeldiniz!"<<endl<<endl;
	bool click=false;
	while(true){
		if(GetAsyncKeyState('P')){
			if(click!=true){
				cout<<yellow<<"FazClick baþladý!"<<endl;	
			}
			click=true;
			Sleep(200);
		}
		else if(GetAsyncKeyState('L')){
			if(click!=false){
				cout<<red<<"FazClick durduruldu!"<<endl;
			}
			click=false;
			Sleep(200);
		}
		else if(GetAsyncKeyState('K')){
			cout<<endl<<white<<"FazClickler bitirildi!"<<endl;
			cout<<yellow;
			break;
		}
		if(click==true){
			mouse::click("l");
			mouse::click("l");
			Sleep(1);
		}
	}
	return 0;
}

