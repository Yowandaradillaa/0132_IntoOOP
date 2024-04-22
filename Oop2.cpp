#include <iostream>
using namespace std;

class bangunDatar{
   private:
   float panjang;
   float lebar;
   public:
   float luas;

   void input(){

    cout << "Masukan Panjangnya = ";
    cin >> panjang;
    cout << "Masukan Lebarnya = ";
    cin >> lebar;
   }
   float hitungLuas (){
        return panjang * lebar;
   }

   void display(){
    
   }
};