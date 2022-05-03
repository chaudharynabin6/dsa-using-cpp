#include <iostream>

using namespace std;

template <class T>
class A{

    public:
    T x = 100;
};

template <class T>
class B{
    public:
    T x = "hello world";
};

template <template <typename> class T,class t1> 
// T is just Template ,and t1 is template argument
class C{

    public:
    // this is class A
    T<t1> class_A_or_B_object;

    // // this is class B
    // T<t1> class_B_object;
}; 

int main(){
    C<A,int> a;

    C<B,string> b;

   

    cout << a.class_A_or_B_object.x << endl;
    cout << b.class_A_or_B_object.x << endl;

    return 0;
}

// https://stackoverflow.com/questions/213761/what-are-some-uses-of-template-template-parameters