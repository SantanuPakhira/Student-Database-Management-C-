#include<iostream>
#include<conio.h>

struct a{
	
};
using namespace std;
class student
{
	private:
		int regno;
		char name[20];
		float cgpa;
		char grade;	
	public:
		void getdetails()
		{
			cout<<"\n\n\t Enter the student details :,";
			cout<<"\n\n\t Enter the name :- ";
			cin>>name;
			cout<<"\n\n\t Enter the regno :- ";
			cin>>regno;
			cout<<"\n\n\t Enter the cgpa of the student :- ";
			cin>>cgpa;
			cout<<"\n\n\t Enter the grade of the student :- ";
			cin>>grade;
		}
		void putdetails()
		{
			system("cls");
			cout<<"\n\n\t The Details of the student :-";
			cout<<"\n\n\t Student registration number :-"<< regno;
			cout<<"\n\n\t Student name :-"<< name;
			cout<<"\n\n\t CGPA of the student :-"<< cgpa;
			cout<<"\n\n\t The grade of the student :-"<< grade; 
		}
		
};


int main()
{
	student s1;
	s1.getdetails();
	s1.putdetails();
	getch();
	return 0;
}

