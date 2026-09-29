#include<iostream>
using namespace std;
main()
{
	string name[5];
	int age[5];
	string status[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<" -----Student-----  "<<endl;
		
		cout<<"Enter name: "<<endl;
		cin>>name[i];
		
		cout<<"Enter age: "<<endl;
		cin>>age[i];
		
		cout<<"Enter status: (only presnt or absent) "<<endl;
		cin>>status[i];
		
	}
	
	string student_name;
	
	cout<<"Enter student name to search: "<<endl;
	cin>>student_name;
	
	bool found=false;
	
	for(int i=0;i<5;i++)
	{
		if(student_name==name[i])
		{
			cout<<name[i]<<endl;
			cout<<age[i]<<endl;
			cout<<status[i]<<endl;
			
			found=true;
			
			break;
		}
		
		
	}
	
	   if (found==false)
	   {
	   		cout<<"Student not found."<<endl;
	   }
	
		
		
	
	return 0;
	
}
