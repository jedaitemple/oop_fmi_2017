#include <iostream>
using namespace std;
class Vector{
    int sizee;
    int capacity;
    int* buffer;
  void resize(){
        int* old_buffer=buffer;
        capacity+=1;
        buffer=new int[capacity];
        for(int i=0;i<capacity;i++){
            buffer[i]=old_buffer[i];
        }
        delete [] old_buffer;
    }

public:
    Vector() :
        sizee(0),
        capacity(0)

    {
        buffer=new int[capacity];
    }
    ~Vector(){
        delete [] buffer;
    }
        Vector(const Vector& v){
            sizee=v.sizee;
            capacity=v.capacity;
            buffer=new int[capacity];
            for(int i=0;i<sizee;i++){
                    buffer[i]=v.buffer[i];

            }

        }
            Vector& operator=(const Vector& v){
                delete [] buffer;
                sizee=v.sizee;
                capacity=v.capacity;
                buffer=new int[capacity];
                    for(int i=0;i<sizee;i++){
                        buffer[i]=v.buffer[i];

                    }

        }

              Vector operator+(const Vector& v){


                    for(int i=0;i<sizee;i++){
                            buffer[i]=v.buffer[i]+buffer[i];

                    }
                    return* this;
        }

         Vector operator-(const Vector& v){


            for(int i=0;i<sizee;i++){
                    buffer[i]=buffer[i]-v.buffer[i];

            }
            return* this;
        }
         Vector operator+=(const Vector& v){


            for(int i=0;i<sizee;i++){
                    buffer[i]=buffer[i]+v.buffer[i];

            }
            return* this;
        }
          Vector operator-=(const Vector& v){


            for(int i=0;i<sizee;i++){
                    buffer[i]=buffer[i]-v.buffer[i];

            }
            return *this;
        }
         friend bool  operator==(const Vector &v, const Vector &v1){
                if((v.sizee==v1.sizee)&&(v.capacity==v1.capacity)){
                                for(int i=0;i<=v.sizee;i++){
                                        if(v.buffer[i] != v1.buffer[i]){
                                                return false ;

                                        }

                                }

                   }

            return true;

        }


 Vector operator/(int a){


            for(int i=0;i<sizee;i++){
                    buffer[i]=buffer[i]/a;

            }
            return *this;
        }
         Vector operator*(int a){


            for(int i=0;i<sizee;i++){
                    buffer[i]=buffer[i]*a;

            }
            return *this;
        }



    int  operator[](int a){

       return buffer[a];
    }
    void push(int s){
        if(sizee>=capacity){
            resize();
        }

        buffer[sizee]=s;
             sizee++;
    }
    int pop(){
        sizee--;
    }
    void display(){
        for(int i=0;i<sizee;i++){

            cout<<buffer[i]<<endl;

        }

    }



};
int main(){
Vector v1;
v1.push(10);
v1.push(43);
v1.push(10);
v1.push(43);
 v1/4;

 Vector v3;

v1.display();
return 0;
}
