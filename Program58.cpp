#include<iostream>
using namespace std;
//Tahfimul Latif
//Program58
//to print the odd numbers of a list of 5 numbers: 3,2,-7,19,-18 between 5 and 14 using FOR LOOP
//March 24, 2018
int main()
{
  int w=5;
  for(w; w<=14; w++)
  {
    if (w%2!=0) {
      cout<<w<<endl;
    }
  }
  return 0;
}
