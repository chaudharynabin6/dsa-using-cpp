#include <iostream>

using namespace std;

//error: no default argument at the end of parameter list:
//  template < class type1=int,class type2=float,class type3>

template < class type1,class type2=float,class type3=string>
class Display{
    type1 a;
    type2 b;
    type3 c;
    public:

    Display(type1 a,type2 b, type3 c){

        this->a = a;
        this->b = b;
        this->c = c;
    }

    ~Display(){
        cout << this->a<< ":" << this->b << ":"<< this->c << endl;
        cout << "--------" << endl;
    }
};
int main(){
    
    Display <int> d1 = Display<int>(1,1.0,"one");
    Display <string,float,int> d2 = Display<string,float,int>("two",2.0,1);
    Display <string,int,float> d3 = Display<string,int,float>("three",1,3.0);

    return 0;
}