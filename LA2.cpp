#include<bits/stdc++.h>
using namespace std;

class student
{
        
        char name[20],division,bloodgroup[2],contact_address[50];
        int roll_number,class_,dateofbirth,telephone_number,driving_license_no;
    public:
                
	student(){cout<<"constuctor is displayed "<<endl;}
				
	void input(){
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter division :";
        cin>>division;
        cout<<"Enter blood group :";
        cin>> bloodgroup;
        cout<<"Enter contact address:";
        cin>>contact_address;
        cout<<"Enter roll number :";
        cin>>roll_number;
        cout<<"Enter class :";
        cin>>class_;
        cout<<"Enter date of birth :";
        cin>>dateofbirth;
        cout<<"Enter telephone number :";
        cin>>telephone_number;
        cout<<"Enter driving_license_no";
        cin>>driving_license_no;
}
                
				
	void display(){
        cout<<"\n Name : "<<name;
        cout<<"\n division : "<<division;
        cout<<"\n blood group : "<<bloodgroup;
        cout<<"\n contact address : "<<contact_address;
        cout<<"\n roll number : "<<roll_number;
        cout<<"\n class : "<<class_;
        cout<<"\n dateofbirth : "<<dateofbirth;
        cout<<"\n telephone number : "<<telephone_number;
        cout<<"\n driving license no : "<<driving_license_no;
}
	~student(){cout<<" destucrtor is displayed "<<endl;}
      
};

int main()
{
        student s1,s2,s3;
        s1.input();
        s2.input();
        s3.input();
        s1.display();
        s2.display();
        s3.display();
        
}

