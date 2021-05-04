//Dr_T Unit 2 COSC-1437 Starter 
/* Task -
April 9, 2021
Dr. T - Tarrant County College
Create vectors and output to screen
Learned how to control vectors and display only certain numbers and organize them

Top level solution folder: C_STL_Library_Hong

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
#include <algorithm>
using namespace std; 

typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
bool less_than_7(int value)
    {
      return value < 7;
    }

int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

   //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    vi.push_back(5);
   // add 3 elements to the vs vector
    vs.push_back("1");
    vs.push_back("2");
    vs.push_back("3");
    vs.push_back("55");
   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
  //cout << "\nAnother way to print vector: " << endl; 
  //for(int i = 0; i < vd.size(); i++)
  //{
  //  cout << vd[i] << endl; 
  //}

    //display the 3 elements in the vi vector
  cout << "\nValues in vd: \n";
  for(double vals :vi)
  {
    cout << vals << endl;
  }
   // display the 3 elements in the vs vector
  cout << "\nValues in vs: \n";
  for(int i = 0; i < vs.size(); i++)
  {
    cout << vs[i] << endl; 
  }
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3

    /****Section_Name***STL_Iterators*/ 
    cout << endl;
    vector<int> vint(10);
    vint[0] = 1;
    vint[1] = 2;
    vint[2] = 3;
    vint[3] = 4;
    vint[4] = 5;
    vint[5] = 6;
    vint[6] = 7;
    vint[7] = 8;
    vint[8] = 9;
    vint[9] = 10;

    vector<int>::iterator it;
    for(it = vint.begin(); it != vint.end(); ++it)
    {
      cout << " " << *it;
    }
    cout << endl;

    /****Section_Name*** Stack*/
    stack<int> st;
    st.push(100);
    assert(st.size() == 1);
    assert(st.top() == 100);
    st.top() = 456;
    assert(st.top() == 456);
    st.pop();
    assert(st.empty() == true);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    cout << endl;
    set<int> iset; //set of unique integer numbers
    iset.insert(11); // populate set with some values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);
    if(iset.find(55) != iset.end()) // is value already stored?
    {
      iset.insert(55);
    }
    assert(iset.size() == 4); // sanity check
    set<int>::iterator itf;
    for(itf = iset.begin(); itf != iset.end(); itf++)
    {
      cout << " " << *itf;
    }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure\
    cout << endl;
    pair<string, string> strstr;
    strstr.first = "Hello";
    strstr.second = "World";

    pair<int, string> intstr;
    intstr.first = 1;
    intstr.second = "one";

    pair<string, int> strint("two", 2);
    assert(strint.first== "two");
    assert(strint.second == 2);
    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    MapT amap;
    pair<MapIterT, bool> result = amap.insert(make_pair("Vincent", 45));
    assert(result.second == true);
    assert(result.first->second == 45);
    result =amap.insert(make_pair("Vincent", 54));

    //Vincent was already in the map, and result.first
    //simply points there now:
    assert(result.second == false);
    assert(result.first->second == 45);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    map<string, string> phone_book;
    phone_book["411"] = "Directory";
    phone_book["911"] = "Emergency";
    phone_book["508-678-2811"] = "BCC";
    if(phone_book.find("411") != phone_book.end())
    {
      phone_book.insert(make_pair(string("411"), string("Directory")));
    }
    assert(phone_book.size() == 3);
    map<string, string>::const_iterator ita;
    for(ita = phone_book.begin(); ita != phone_book.end(); ++ita)
    {
      cout << " " << ita->first << " " << ita->second << endl;
    }
    /* Output:
    411 Directory
    508-678-2811 BCC
    911 Emergency
    */

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
    int arr[10];
    sort(arr, arr + 10);
    vector<int> v1;
    sort(v1.begin(), v1.end());
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function
    vector<int> v2;
    int count_less = std::count_if(v2.begin(), v2.end(), less_than_7);
    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }