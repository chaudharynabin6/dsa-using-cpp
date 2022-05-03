#include <iostream>


using namespace std;
template <class type1,class type2> float add(type1 a,type2 b){
    return a+b;    
}
// can swap any data type
template <class T1,class T2>
void customSwap(T1* a,T2* b){
    T1* temp = a;
    a =  b;
    b = temp;
}

template <class T>
class Vector{
    T id;

    public:
    Vector(T id){
        this->id = id;
    }

    T getId(){
        return this->id;
    }
};

int main(){

    cout << add<int,int>(1,2) << endl;
    cout << add<int,float>(1,2.1) << endl;
    cout << add<float,float>(2.2,2.3) << endl;
    
    cout << endl << "-------- swap ---------" << endl;
    // float a = 2.3, b = 34;
    string a = "hello" , b = "world";
    // swap(a,b);
    customSwap<string>(&a,&b);

    cout << a << "::" << b << endl;

    cout << endl << "-------any object swapping--------" << endl;

    Vector <string> v1 =  Vector<string>("one");
    Vector <int> v2 = Vector<int>(1);
    
    cout << "v1 : " << v1.getId() << endl;
    cout << "v2 : " << v2.getId() << endl; 

    // customSwap<Vector<string>,Vector<int>>(&v1,&v2);
    // swap(v1,v2);

    cout << "------after swapping------" << endl;

    cout << "v1 : " << v1.getId() << endl;
    cout << "v2 : " << v2.getId() << endl;     


    

    return 0;
}