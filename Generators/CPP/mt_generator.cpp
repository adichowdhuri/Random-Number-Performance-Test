#include<iostream>
#include<random>
#include<fstream>
#include<chrono>
#include<iostream>

int main()
{
    using namespace std;
    fstream outStream("mt_random_numbers.csv",std::ios::out);
    using namespace std::chrono;

    //Initialise the seed value using the system clock from the chrono header.
    unsigned seed = system_clock::now().time_since_epoch().count();

    //We are using the merienne twister mt19937 engine 
    std::mt19937 generator (seed);
    outStream<<100000<<endl<<"Seed Value"<<','<<"random_number"<<endl;
    for(int i=0; i<100000;i++){
    outStream<<system_clock::now().time_since_epoch().count()<<','<<generator()<<endl;
    outStream.flush();
    }
    
}