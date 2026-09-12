#include<iostream>

int main(){
    // int x = 0;
    // std::cout<<"Enter the value of x: ";
    // std::cin>>x;
    // while(x<=10){

    //     std::cout<<"x is: "<< x <<std::endl;
    //     x++;
    // }
/*
    int sum = 0, val = 1;
    
    while(val<=10){
        sum+=val;
        std::cout<<"val is: "<<val<<" and sum is: "<<sum<<std::endl;
        ++val;
    }

     std::cout<<"\nSum of 1 to 10 inclusive is: "<< sum <<std::endl;
*/

//sum numbers from 50 to 100

/*
std::cout<<"***************************************************"<<std::endl;
    int sum = 0, val = 50;
    
    while(val<=100){
        sum+=val;
       // std::cout<<"val is: "<<val<<" and sum is: "<<sum<<std::endl;
        ++val;
    }

     std::cout<<"\nSum of 1 to 10 inclusive is: "<< sum <<std::endl;
   std::cout<<"***************************************************"<<std::endl;
   //Decrement operator --
   
   int num = 10;
   while (num>=0){
    std::cout<<"num is now: "<<num<<std::endl;
    --num;
   }
   std::cout<<"***************************************************"<<std::endl;
   int first, second; 
   std::cout << "Enter the first integer: "; 
   std::cin >> first; 
   std::cout << "Enter the second integer: "; 
   std::cin >> second; 
   while (first <= second) 
   { 
    std::cout << first << " "; 
    first++; 
        
    } 
    std::cout << std::endl;

    std::cout<<"************* For Loops **********************"<<std::endl;

    int sum_s = 0;

    for(int i= -5; i<=10; ++i){
        sum_s+=i;
        std::cout<<"Sum of: "<<i<< " to: "<<sum_s<< " inclusive is "
        <<sum_s<<std::endl;
    }
*/
std::cout<<"***********************************"<<std::endl;
std::cout<<"Enter any number"<<std::endl;
int sum = 0, val = 0;

//If the stream (istream) is valid (no errors) then the tests succeeds
//end-of-file (error encountered)
// end-of-file Ctrl-D
while (std::cin>>val)
sum+=val;

std::cout<<"Sum is: "<<sum<<std::endl;



    return 0;
}