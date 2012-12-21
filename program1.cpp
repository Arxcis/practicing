#include<iostream>
using namespace std;

int main()
{
   double lonn = 25000.0;
   
   contribution5 = lonn * 0.05;
   contribution7 = lonn * 0.07;
   contribution10 = lonn * 0.10;
   
   cout << "Din lonn er 25 000 kr i måneden" << endl;
   cout << "Dersom du sparer 5 % av dette hver måned, blir det lagt til " 
             << contribution5 << "kr hver måned." << endl;
   cout << "Dersom du sparer 7 % av dette hver måned, blir det lagt til " 
             << contribution7 << "kr hver måned." << endl;
   cout << "Dersom du sparer 10 % av dette hver måned, blir det lagt til " 
             << contribution10 << "kr hver måned." << endl;
     
   return 0; 
 }
