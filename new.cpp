/*wap menu driven to find area of circle rectangle square using classes*/
#include<iostream>
using namespace std;

class area{
	public:
	
	void circle(){
	int radius;
	cout<<"Enter radius of circle:"<<endl;
	cin>>radius;
	cout<<"Area of circle is:"<<3.14*radius*radius;}
	
	void rectangle(){
	int len,bre;
	cout<<"Enter length and breadth of rectangle:"<<endl;
	cin>>len>>bre;
	cout<<"Area of rectangle is:"<<len*bre;
	}
	
	void square(){
	int side;
	cout<<"Enter length of square:"<<endl;
	cin>>side;
	cout<<"Area of square is:"<<side*side;
	}
	
};




int main(){
	
	area one;
	int choice;
	cout<<"Calculate Area\n1. Circle\n2. Rectangle\n3. Square\n Enter Choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			one.circle();
			break;
		case 2:
			one.rectangle();
			break;
		case 3:
			one.square();
			
	}
    return 0;
	
}