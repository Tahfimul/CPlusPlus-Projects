#include<iostream>
using namespace std;
//Tahfimul Latif
//Program70
//to print first and last numbers from 13 and 17 using Do While LOOP
//March 24, 2018
int main() {
  int w = 13;
  do {
    if (w==13) {
      cout<<"First number: "<<w<<endl;
    }
    if (w==17) {
      cout<<"Last number: "<<w<<endl;
    }
    w++;
  }while (w<=17);
  return 0;
}
