#include <iostream>
using namespace std;
int main()
{
	 int n2;
 	 int n3;
 	 int n4;
 	 int num;
 	//  int dcnum;
	 int rnum;
	 //rnum=reve30rse of number
 	 //dcnum=decimal complement number
 	 cout<<"Enter a three digit +ve integer: ";
 	 cin>>num;
 	 n2=num/100;
 	 num=num-n2*100;
 	 n3=num/10;
 	 num=num-n3*10;
 	 n4=num;
	 num=num-n4;
	//  rnum=n4*100+n3*10+n2;
	 if (n2==n4)
	cout<<"Full symmetric"<<endl;
	else if (n2==n3 || n3==n4)
	cout<<"Partially symmetric"<<endl;
	else 
	cout<<"asymmetric";

 	//  dcnum=(9-n1)*1000+(9-n2)*100+(9-n3)*10+(9-n4);
	//  cout<<"The value in decimal complement number: "<<dcnum;
	
    return 0;

}