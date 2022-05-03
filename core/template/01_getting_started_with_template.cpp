// converting class into template

#include <iostream>

using namespace std;
template <class T>
class Vector{
    public:
    T* arr;
    int length;
        Vector(){

        }
        
        Vector(T* arr){
            this->arr = arr;
            this->length = 3;
        }


        void display(){
            // error: later will be solved
            // for(int x:this->arr){
            //     cout << x << end;
            // }
            for(int i = 0; i < this->length; i++){
                cout << this->arr[i] << " ";
            }
            
            cout << endl;
            cout << "--------------" << endl;
        }

         T dotProduct(Vector v1,Vector v2){
            // cout << vector << endl;
            // cout << "dot" << endl;
            T sum = 0;

            if(v1.length != v2.length){
                
                cout << "ERROR : dimention not matching" << endl;
                 return 0;
            }

            else{
                for(int i = 0 ; i < v1.length; i++){
                  
                    sum += v1.arr[i] * v2.arr[i];
                }
                return sum;
            }
            
        }
        
};

int main(){
    
float a[]  = {1,2,10};
Vector <float> v1 = Vector<float>(a);

float b[]  = {2,3,4};
Vector <float> v2 = Vector<float>(b);

v1.display();
v2.display();

cout << "dot product = " << v1.dotProduct(v1,v2) << endl;
return 0;
}