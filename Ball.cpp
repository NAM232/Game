#include<iostream>
#include<Windows.h>
#include<stdio.h>
#include<conio.h>
#define key_Up 1072
#define key_Down 1080
#define key_Left 1075
#define key_Right 1077
#define key_none -1
using namespace std;
int checkp = 0;
int p = 0;
int color1 = 7;
void thongtin(int a, int b, int p);
void point(int a, int b, int p,int check);
void game();
void giaodien();
void gotoXY(int x, int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void TextColor(int color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
void Nocursortype(){
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
int inputkey(){
	if(_kbhit()){
		char key = _getch();
		if(key == 224){
			return key + 1000;
		}else{
			return key_none;
		}
	}
	return key_none;
}
int main(){

	game();
}
void point(int a,int b, int p,int check){
	char aa = true;
	char ab = true;
	TextColor(02);
	if(aa){
		gotoXY(0,0);
		cout<<(char)219;
		if(a == 1){
			if(b == 1){
				p++;
				check = 2;
				aa = false;
			}
		}
		if(a == 2){
			if(b == 1){
				p++;
				check = 2;
				aa = false;
			}
		}
	}
	if(ab){
		gotoXY(1,0);
		cout<<(char)219;
		if(a == 2){
			if(b == 1){
				p++;
				check = 2;
				ab = false;
			}
		}
		if(a == 3){
			if(b == 0){
				p++;
				check = 2;
				ab = false;
			}
		}
	}
	
}
void thongtin(int a,int b,int p){
	int x = 58;
	TextColor(07);
	gotoXY(52,0);
	cout<<"#############";
	gotoXY(52,1);
	cout<<"#   Score   #"<<endl;
	gotoXY(52,2);
	cout<<"#           #"<<endl;
	gotoXY(52,3);
	cout<<"#############";
	TextColor(color1);
	if(p > 9){
		x = 57;
	}
	gotoXY(x,2);
	cout<<p;
}
void giaodien(){
	int xx = 51;
	int xy = 0;
	while(xy <= 29){
			gotoXY(xx,xy);
			TextColor(07);
			cout<<(char)219;
			xy++;
	} 	
}
void game(){
	int iz = 04;
	int b = 20;
	int bl = 20;
	int ab = 19;
	int abl = 19;
	int bb = 21;
	int bbl = 19;
	int cb = 19;
	int cbl = 21;
	int db = 21;
	int dbl = 21;
	int check1 = 0;
	int check2 = 0;
	int xa = 20;
	int xs = 29;
	int x = 20;   
	int y = 27;
	int x1 = 21;
	int y1 = 27;
	int x2 = 22;
	int y2 = 27;
	int x3 = 23;
	int y3 = 27;
	int x4 = 24;
	int y4 = 27;
	int x5 = 25;
	int y5 = 27;
	int x6 = 26;
	int y6 = 27;
	int x7 = 27;
	int y7 = 27;
	int x8 = 28;
	int y8 = 27;
	int x9 = 29;
	int y9 = 27;
	int sx = 20;   
	int sy = 27;
	int sx1 = 21;
	int sy1 = 26;
	int sx2 = 22;
	int sy2 = 26;
	int sx3 = 23;
	int sy3 = 26;
	int sx4 = 24;
	int sy4 = 26;
	int sx5 = 25;
	int sy5 = 26;
	int sx6 = 26;
	int sy6 = 26;
	int sx7 = 27;
	int sy7 = 26;
	int sx8 = 28;
	int sy8 = 26;
	int sx9 = 29;
	int sy9 = 26;
	int checksp = 0;
	int check = 1;
	while(true){
		if(check1 == 0){
			b++;
			ab++;
			bb++;
			cb++;
		    db++;
			
		}
		if(check1 == 1){
	    	b--;
	    	ab--;
	    	bb--;
	    	cb--;
	    	db--;
    	}
		if(check2 == 0){
			bl++;
			abl++;
			bbl++;
			cbl++;
			dbl++;
		}
		if(check2 == 1){
			bl--;
			abl--;
			bbl--;
			cbl--;
			dbl--;
		}
		if(b == 50) {
		check1 = 1;
		PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
		}
		if(b == 0) {
		check1 = 0;
		PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
		}
		if(bl == 29) {
		check2 = 1;
		PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
		}
		if(bl == 0) {
		PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
		check2 = 0;
		}
		gotoXY(29,52);
		cout;
		gotoXY(ab,abl);
		cout<<" ";
		gotoXY(bb,bbl);
		cout<<" ";
		gotoXY(cb,cbl);
		cout<<" ";
		gotoXY(db,dbl);
		cout<<" ";
		TextColor(iz);
		gotoXY(b,bl);
		cout<<"O";
		TextColor(02);
		gotoXY(x,y);
		cout<<(char)219;
		gotoXY(x1,y1);
		cout<<(char)219;
		gotoXY(x2,y2);
		cout<<(char)219;
		gotoXY(x3,y3);
		cout<<(char)219;
		gotoXY(x4,y4);
		cout<<(char)219;
		gotoXY(x5,y5);
		cout<<(char)219;
		gotoXY(x6,y6);
		cout<<(char)219;
		gotoXY(x7,y7);
		cout<<(char)219;
		gotoXY(x8,y8);
		cout<<(char)219;
		gotoXY(x9,y9);
		cout<<(char)219;
		gotoXY(50,25);
		cout;
		Nocursortype();
		giaodien();
		Sleep(150);		
		point(b,bl,p,check2);
		thongtin(b,bl,p);
			if(bl == 29){
			PlaySound(TEXT("Fail.wav"),NULL,SND_FILENAME|SND_ASYNC);
			system("cls");
			TextColor(01);
			cout<<"G";
			Sleep(200);
			TextColor(02);
			cout<<"a";
			Sleep(200);
			TextColor(03);
			cout<<"m";
			Sleep(200);
			TextColor(04);
			cout<<"e"<<" ";
			Sleep(200);
			TextColor(05);
			cout<<"o";
			Sleep(200);
			TextColor(06);
			cout<<"v";
			Sleep(200);
			TextColor(8);
			cout<<"e";
			Sleep(200);
			TextColor(9);
			cout<<"r"<<endl;
			Sleep(200);
			TextColor(07);
			system("pause");
			p = 0;
			system("cls");
			main();
		}
		if(iz >= 15){
			iz = 0;
		}
		gotoXY(xa,27);
		cout<<" ";
		gotoXY(xs,27);
		cout<<" ";
		if(sx == b){
			if(sy == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
			}
		}
		if(sx1 == b){
			if(sy1 == bl){
				p++;
				check2 = 1;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx2 == b){
			if(sy2 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx3 == b){
			if(sy3 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx4 == b){
			if(sy4 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx5 == b){
			if(sy5 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx6 == b){
			if(sy6 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx7 == b){
			if(sy7 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx8 == b){
			if(sy8 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(sx9 == b){
			if(sy9 == bl){
				check2 = 1;
				p++;
				PlaySound(TEXT("TBB.wav"),NULL,SND_FILENAME|SND_ASYNC);
				iz++;
			}
		}
		if(kbhit()){
			char key = getch();
			if(key == ' '){
				checksp++;
			}
		}
		if(check == 1){
			if(checksp == 1){
	    		x++;
				x1++;
				x2++;
				x3++;
				x4++;
				x5++;
				x6++;
				x7++;
				x8++;
				x9++;
				xa++;
				xs++;
				sx++;
				sx1++;
				sx2++;
				sx3++;
				sx4++;
				sx5++;
				sx6++;
				sx7++;
				sx8++;
				sx9++;
		}
		if(checksp == 2){
	    		x--;
				x1--;
				x2--;
				x3--;
				x4--;
				x5--;
				x6--;
				x7--;
				x8--;
				x9--;
				xa--;
				xs--;
				sx--;
				sx1--;
				sx2--;
				sx3--;
				sx4--;
				sx5--;
				sx6--;
				sx7--;
				sx8--;
				sx9--;
		   }
		}
		if(check == 2){
			if(checksp == 1){
	    		x--;
				x1--;
				x2--;
				x3--;
				x4--;
				x5--;
				x6--;
				x7--;
				x8--;
				x9--;
				xa--;
				xs--;
				sx--;
				sx1--;
				sx2--;
				sx3--;
				sx4--;
				sx5--;
				sx6--;
				sx7--;
				sx8--;
				sx9--;
		}
		if(checksp == 2){
	    		x++;
				x1++;
				x2++;
				x3++;
				x4++;
				x5++;
				x6++;
				x7++;
				x8++;
				x9++;
				xa++;
				xs++;
				sx++;
				sx1++;
				sx2++;
				sx3++;
				sx4++;
				sx5++;
				sx6++;
				sx7++;
				sx8++;
				sx9++;
		    }
		}
		if(x == 0){
			checksp = 0;
			check = 1;
		}
		if(x9 == 50){
			checksp = 0;
			check = 2;
		}
		if(checksp >= 3){
			checksp = 1;
		}
	}
}
