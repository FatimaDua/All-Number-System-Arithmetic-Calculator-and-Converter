#include<function.h>
#include<conio.h>
#include<windows.h>


int main()
{CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 22;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"courier new"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
char z;
system("color 70");
do
{
char menu;
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t****************************************************";
cout<<"\n\t\t\t****************************************************";
cout<<"\n\t\t\t*                                                  *";
cout<<"\n\t\t\t*            WELCOME TO MAIN MENU                  *";
cout<<"\n\t\t\t*            --------------------                  *";
cout<<"\n\t\t\t*                                                  *";
cout<<"\n\t\t\t*                                                  *";
cout<<"\n\t\t\t*            PRESS '$' FOR CONVERTER               *";
cout<<"\n\t\t\t*            PRESS '&' FOR CALCULATOR              *";
cout<<"\n\t\t\t*                                                  *";
cout<<"\n\t\t\t*                                                  *";
cout<<"\n\t\t\t****************************************************";
cout<<"\n\t\t\t****************************************************\n\n\n\t\t\t";
 cin>>menu;
system("cls");
switch(menu)
{char choice;
case '$':
cout<<"\n\n\n\n\n\n\n\t\t\t\t       SUB MENU FOR CONVERTER ";
cout<<"\n                                      ------------------------";
cout<<"\n                                      ------------------------";
cout<<"\n\n\n\n\n\t\t\t   PRESS 'a' TO CONVERT DECIMAL NUMBERS TO ANY NUMBER SYSTEM \t";
cout<<"\n\n\t\t\t   PRESS 'b' TO CONVERT BINARY NUMBERS TO ANY NUMBER SYSTEM \t";
cout<<"\n\n\t\t\t   PRESS 'c' TO CONVERT OCTAL NUMBERS TO ANY NUMBER SYSTEM \t";
cout<<"\n\n\t\t\t   PRESS 'd' TO CONVERT HEXADECIMAL NUMBERS TO ANY NUMBER SYSTEM   ";
cout<<"\n\n\t\t\t   PRESS 'e' TO CONVERT CHARACTER INTO ASCII CODES \n\n\t\t\t   ";
cin>>choice;
system("cls");
if(choice=='a' || choice=='b' || choice=='c' || choice=='d' || choice=='e' )
{switch(choice)
{case 'a':
   dec_converter();
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;
case 'b':
	bin_converter();
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;
case 'c':
	oct_converter();
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;
case 'd':
	hexa_converter();
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;
case 'e':
	char a;
    ascii(a);
    cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;}}
	else
{cout<<"\n\n\t\t\t\t Sorry! You didn't Enter Correct Letter ";
cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
cin>>z;
	system("cls");}
break;
case '&':
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t SUB MENU FOR CALCULATOR";
cout<<"\n                                        -------------------------";
cout<<"\n                                        -------------------------";
cout<<"\n\n\n\n\n\t\t\t   PRESS 'f' TO PERFORM ARITHEMETIC OPERATIONS ON DECIMAL NUMBERS \t";
cout<<"\n\n\t\t\t   PRESS 'g' TO PERFORM ARITHEMETIC OPERATIONS ON BINARY NUMBERS \t";
cout<<"\n\n\t\t\t   PRESS 'h' TO PERFORM ARITHEMETIC OPERATIONS ON OCTAL NUMBERS \t";
cout<<"\n\n\t\t\t   PRESS 'i' TO PERFORM ARITHEMETIC OPERATIONS ON HEXADECIMAL NUMBERS \t\n\n\t\t\t   ";
cin>>choice;
system("cls");
if(choice=='f' || choice=='g' || choice=='h' || choice=='i')
{switch(choice)
{int num1,num2;
case 'f':
	dec_arith(num1,num2);
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;
case 'g':
	bin_arith(num1,num2);
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;
case 'h':
	oct_arith(num1,num2);
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;
case 'i':
	char a[100];
	char b[100];
	hex_arith(a,b);
	cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;}}
else
{cout<<"\n\n\t\t\t\t Sorry You didn't Enter Correct Letter ";
cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");}
    break;
default:
	  cout<<"\n\n\n\t\t\t\t Sorry! You Didn't Press Correct Sign ";
	  cout<<"\n\n\n\n\t ENTER '<' TO GO TO MAIN MENU AGAIN \n\n\t ";
	cin>>z;
	system("cls");
	break;}}
	while(z=='<');
	getch();
return 0;}

