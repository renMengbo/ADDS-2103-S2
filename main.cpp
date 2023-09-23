#include <iostream>

#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    int Array[100];     
    string str;
    string FUNCTION_CODE="NULL";
    int size =100;
    int number=0;
    int param1=-1; 
    int param2=-1;
    char Input[size];
    cout <<" Input:" ;   
    cin.getline(Input,size); 
    
    int i = 0; int j=0;
    while ( i < size)
    {
//cout << i <<"="<< Input[i]<<"|";
        if (Input[i] == '\0')
        {           
           param2 = number;
//cout <<" param2: " << param2 <<endl;             
            break;
        } 

        if (Input[i] == ' ')
        {
//cout << Input[i]<<"*";
            if (FUNCTION_CODE=="NULL"){
//cout << number<<"-";                      
                Array[j]=number;
                j++;
                number=0; 
            }else if(FUNCTION_CODE == "OK")
            {
                FUNCTION_CODE = str;
              
            }else if (param1 ==-1)
            {
                param1 = number;
                number=0; 
//cout <<"param1:"<< param1<<endl; 
            }
            else  
            {
 //           param2 = Input[i-1]-'0';
//cout <<"param2:--hhhhh"<< param2 <<endl; 
            }

        }else if (Input[i] >= '0' && Input[i] <= '9')
        {
//cout << i <<"-"<<Input[i]<<"=="<< number <<endl;            
            number=number*10+Input[i]-'0';
        }
        else
        {   
            FUNCTION_CODE = "OK";
            str=str+Input[i]; 
//cout << i <<"="<< Input[i]<<"|";            
//cout <<"FUNCTION_CODE:"<< FUNCTION_CODE <<"->" << str<<"!"<<endl;                    
        }

        i++;        
    }
int A[j];
 //cout <<" j "<<j<<endl;
   for (int i = 0; i < j; i++)
   {
     A[i]=Array[i];
      //  cout << i <<"$" <<Array[i]<<endl;
   }
//cout <<" j+ "<<j<<endl;  

/* LinkedList L1;   
   L1.addEnd(21);
   L1.addEnd(22);
   L1.addEnd(23);
   L1.addEnd(24);
   L1.addEnd(25);
   L1.addEnd(26);
   // L1.addAtPosition(3,30);
   // L1.deletePosition(5);
   // cout <<"4-"<< L1.getItem(4) <<endl;
   //L1.deleteFront();
   L1.printItems();
*/
   LinkedList  List(A,j);
   
    if (FUNCTION_CODE =="AF"){List.addFront(param1);}
    else if (FUNCTION_CODE =="AE"){List.addEnd(param1);}
    else if (FUNCTION_CODE =="AP"){List.addAtPosition(param1,param2);}
    else if (FUNCTION_CODE =="S"){List.search(param1);}
    else if (FUNCTION_CODE =="DF"){List.deleteFront();}
    else if (FUNCTION_CODE =="DE"){List.deleteEnd();}
    else if (FUNCTION_CODE =="DP"){List.deletePosition(param1);}
    else if (FUNCTION_CODE =="GI"){List.getItem(param1);}
    {
    
    } 
   
   List.printItems();

    return 0;
}