#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void timer(int time) //timer function for sleep 
{
    Sleep(time*1500);
}
void Color(int color_code) //function to change color
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_code);
}
int main(){
	int RandomNumber,p=0,score=1;   //variable declaration and intializing datatype
	char color[]= {'r','b','g','y'},repeat;
	srand(time(NULL));
	cout<<endl;
	cout<<"\t******************************\n";
	cout<<"\tWELCOME TO COLOR SEQUENCE GAME"<<endl;           
	cout<<"\t******************************\n";
	cout<<"\n\n\n";4
	
	cout<<"\t-------------\n";
	cout<<"\tDeveloped By:\n";
	cout<<"\t-------------\n";
	cout<<"\t\t|>Faizan Shaikh       (21CS007)"<<endl;
	cout<<"\t\t|>Muhammad Adeel Shah (21CS041)"<<endl;
	cout<<"\t\t|>Mohammad Mashaal    (21CS105)";
	timer(4);
	system("CLS");
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour score is: "<<score-1<<endl;
	do{
		system("CLS");						//clears the screen
	do{
		cout<<"The color sequence is "<<endl;
		cout<<endl;
		for(int i=0;i<score;i++){   
		RandomNumber = (rand()%4);     //random function implementation 
		color[RandomNumber];
		Color(7);
		if(color[RandomNumber]=='g'){                                //conditional statements
			Color(2);
			cout<<"Green"<<endl;
		}
		else if(color[RandomNumber]=='r'){
			Color(4);
			cout<<"Red"<<endl;
		
		}
		else if(color[RandomNumber]=='b'){
			Color(9);
			cout<<"blue"<<endl;
		}
		else if(color[RandomNumber]=='y'){
			Color(6);
			cout<<"yellow"<<endl;
		}
	
	}
		timer(2);
		system("CLS");
		Color(7);
		cout<<"\t\tNow your memory check has begun"<<endl;
		cout<<"\tFor";
		Color(4);
		cout<<" Red ";
		Color(7);
		cout<<" Press '1' "<<endl;
		cout<<"\tFor";
		Color(9);
		cout<<" Blue ";
		Color(7);
		cout<<" Press '2' "<<endl;
		cout<<"\tFor";
		Color(2);
		cout<<" Green ";
		Color(7);
		cout<<"Press '3' "<<endl;
		cout<<"\tFor";
		Color(6);
		cout<<" Yellow ";
		Color(7);
		cout<<"Press '4' "<<endl;
		char user_color[]=  {'r','b','g','y'};
		int assume;
		Color(14);
		for(int i=0;i<score;i++){
			cout<<" Color Number "<<i+1<<" of the sequance was: ";
			cin>>assume;
		}
		assume=assume-1;
		if(user_color[assume]==color[RandomNumber]){   //comparing the user input
			cout<< "You won"<<endl;
			score++;
			system("CLS");                
		}
		else{
			cout<<"\t\t\t********\n";
			cout<< "\t\t\tYou lose"<<endl;
			cout<<"\t\t\tYour highest score was "<<score-1<<endl;
			cout<<"\t\t\t*************************\n";
			break;
	}
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour score is: "<<score-1<<endl;
}while(p<score);
	cout<<"Wanna play again ?"<<endl;
	cout<<"yes=[y], no=[any key]"<<endl;
	cin>>repeat;
	score=1;
}while(repeat=='y'|| repeat=='Y');
	system("CLS");
	return 0;

}
