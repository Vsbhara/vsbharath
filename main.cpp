#include<iostream>
using namespace std;
class display
{
	public:
    display()
    {
    	char name[10];
    	int Rollno;
    	char dep[20];
    	char section;
    	cout<<"Enter your name: ";
    	cin>>name;
    	cout<<"enter your Roll no:";
    	cin>>Rollno;
    	cout<<"enter you depaterment:";
    	cin>>dep;
    	cout<<"enter your section:";
    	cin>>section;
    void display()
    {
    	
    
    	cout<<"name:"<<display.name<<endl;
    	cout<<"Rollno:"<<display.Rollno<<endl;
    	cout<<"dep:"<<display.dep<<endl;
    	cout<<"section:"<<display.section<<endl;
	    
    	
	
    }
    
};
  int main()
{
	student obj;
	obj.display();
	return 0;
	
}
