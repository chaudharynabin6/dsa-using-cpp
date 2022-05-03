#include <iostream>

using namespace std;

template <class template1,class template2> class Mapper{

    template1 number;
    template2 s;

    public:

    void display(){
        
        cout << this->number  << ":" << this->s << endl;

        cout << "--------------" << endl;
    }

    Mapper(template1 number,template2 s){

        this->number = number;
        this->s = s;

    }
};

int main(){
    
    Mapper<int,string> mapper1(1,"one");
    mapper1.display();

    Mapper <string,int > reverse_mappper("one",1);
    reverse_mappper.display();


    return 0;
}