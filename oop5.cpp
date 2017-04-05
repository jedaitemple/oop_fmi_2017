#include<iostream>
#include<cstring>
#include<string>

using namespace std;
class Sluzitel{
    char* name;
    char* address;
    char* egn;
    char* otdel;
    char* zaplata;
public:
    Sluzitel(){};
    Sluzitel(const char* name_,const char* address_,const char* egn_,const char* otdel_,const char* zaplata_){
           int  arr_size = strlen(name_);
            name = new char[arr_size+1];
            strcpy(name, name_);

            arr_size = strlen(address_);
            address = new char[arr_size+1];
            strcpy(address, address_);

            arr_size = strlen(egn_);
            egn = new char[arr_size+1];
            strcpy(egn, egn_);

            arr_size = strlen(otdel_);
            otdel = new char[arr_size+1];
            strcpy(otdel, otdel_);

            arr_size = strlen(zaplata_);
            zaplata = new char[arr_size+1];
            strcpy(zaplata, zaplata_);
    }

        Sluzitel(const Sluzitel& other){
           int  arr_size = strlen(other.name);
            name = new char[arr_size+1];
            strcpy(name, other.name);

            arr_size = strlen(other.address);
            address = new char[arr_size+1];
            strcpy(address, other.address);

            arr_size = strlen(other.egn);
            egn = new char[arr_size+1];
            strcpy(egn, other.egn);

            arr_size = strlen(other.otdel);
            otdel = new char[arr_size+1];
            strcpy(otdel,other.otdel );

            arr_size = strlen(other.zaplata);
            zaplata = new char[arr_size+1];
            strcpy(zaplata,other.zaplata );

    }
       const Sluzitel& operator=(const Sluzitel& other){
                int  arr_size = strlen(other.name);
                name = new char[arr_size+1];
                strcpy(name, other.name);

                arr_size = strlen(other.address);
                address = new char[arr_size+1];
                strcpy(address, other.address);

                arr_size = strlen(other.egn);
                egn = new char[arr_size+1];
                strcpy(egn, other.egn);

                arr_size = strlen(other.otdel);
                otdel = new char[arr_size+1];
                strcpy(otdel,other.otdel );

                arr_size = strlen(other.zaplata);
                zaplata = new char[arr_size+1];
                strcpy(zaplata,other.zaplata );

    }


    ~Sluzitel(){
        delete [] name;
        delete [] address;
        delete [] egn;
        delete [] otdel;
        delete [] zaplata;
    }
     char* getname(){
            return name;

    }
      char* getegn(){
            return egn;

    }
        char* getoddel(){
            return otdel;

    }

    char* getzaplata(){
            return zaplata;

    }
    char* getaddress(){
            return address;

    }

    void print(){
        cout<<name<<"  "<< address<<"  "<<egn<<" "<< otdel<< "  "<<zaplata<<endl;

    }
};
class Specialist : public Sluzitel{
    char* otdel;
public:

    Specialist(){};
    



};
int main(){
Sluzitel s1("Konstantin","Sofia","9706110028","programist","100 000$");
Specialist spec;
spec.information(s1);
return 0;
}
