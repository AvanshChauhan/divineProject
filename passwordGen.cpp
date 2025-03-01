#include<iostream>
#include <cstdlib>
#include<conio.h>
#include <ctime>
#include<string>
using namespace std;

string getPassword(int l){
   string Pass=" ";
   string characters= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*_";
   int charSize=characters.size();
   srand(time(0));
   int randomIndex;
   for (int i = 0; i < l; i++)
   {
    randomIndex=rand()%charSize;
    Pass=Pass+characters[randomIndex];
   }
   return Pass;
   
}




int main(){
    int l;
    cout<<"Enter the length of password :: "<<endl;
    cin>>l;
    string password=getPassword(l);
    cout<<"generated password ::"<<password;
    return 0;
}