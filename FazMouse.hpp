//Fazbear Entertainment - William Afton(Sami Lütfi)
#include<iostream>
#include<windows.h>
using namespace std;

inline std::ostream& white(std::ostream &s)
{
HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hStdout,
FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
return s;
}

inline std::ostream& red(std::ostream &s)
{
HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hStdout,
FOREGROUND_RED | FOREGROUND_INTENSITY);
return s;
}

inline std::ostream& yellow(std::ostream &s)
{
HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hStdout,
FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
return s;
}

class mouse{
public:
	static void click(string val){
		if(val=="left" || val=="LEFT" || val=="l" || val=="L"){
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		else if(val=="right" || val=="RİGHT" || val=="r" || val=="R"){
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
		}
		else{
			cerr<<red<<"Error: Unknown Value..!"<<white;
		}
	}
};

void help(){
	cout<<yellow<<"mouse::click(\"left\"); --> Left click."<<endl;
	cout<<"mouse::click(\"right\"); --> Right click."<<endl;
	cout<<"You can also use capital letters."<<white<<endl;
}
