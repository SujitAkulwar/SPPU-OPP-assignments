
#include<iostream>
using namespace std;

class Publishing{

    public:
    string title;
    float price;
    void get(){
        cout<<"Enter title"<<endl;
        getline(cin, title);

        cout<<"Enter price"<<endl;
        cin>>price;
    }
    void display(){
        cout<<"Title is: "<<title<<endl;
        cout<<"Price is: "<<price<<endl;
    }


};

class Book: public Publishing{
    public:
    int pagecount;

    void get1(){
        cout<<"Enter pagecount"<<endl;
        cin>>pagecount;
    }

    void display1(){
        cout<<"Page count of the book is: "<<pagecount<<endl;
    }

};

class Tape: public Publishing{
    public:
    float playingtime;

    void get2(){
        cout<<"Enter playing tine"<<endl;
        cin>>playingtime;
    }
    void display2(){
        cout<<"Playing time is: "<<playingtime<<endl;
    }
};

int main(){
    Publishing p;
    Book b;
    Tape t;
    p.get();
    p.display();
    b.get1();
    t.get2();
    b.display1();
    t.display2();
}
