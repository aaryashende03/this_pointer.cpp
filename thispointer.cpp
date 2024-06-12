#include<iostream>
using namespace std;
class Demo  // class name
{

public:     // public access specifier

  int ino1;  // chartacteristics
  int ino2;
  
  Demo(int i = 10 , int j = 20)  // parameterized constructor with default arguments
                             {
                              ino1 =  i;
                              ino2 = j;
   
                              }
   void Display(int x , int y)   //Display function (n+1)
   {
    cout<<"value of ino1 is:"<<ino1<<endl;
	cout<<"value of ino2 is:"<<ino2<<endl;
	}
};                               // class has been closed

 int main ()                     // naked function
 
            {
		      Demo obj1;         // by default values 10,20
			  Demo obj2(11);      // 11,20
			  Demo obj3(10,30);  //10,30

			  obj1.Display(51 , 31);   //(&obj1,51)
			                     //(100,51);
								
			  obj2.Display(51 ,31);   //(&obj2,51)
			                     //(200,51);
			                    
			  obj3.Display(51,31);   //(&obj3,51)
			                     //(300,51);
			              
			  return 0;
			}
   
  