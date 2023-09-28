#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <vector>
#include <cstring>

typedef std::chrono::high_resolution_clock Clock;

using namespace std;
 

/*generates a random number between 0 and 2 times the size of the vector and
then converts it into a string with zeros to represent empty number places
*/ 
string randString(int sizeOfVector){
    string stringVal = to_string(rand()%((sizeOfVector*2)+1));
    string maxSizeOfString = to_string(sizeOfVector*2);

    while (stringVal.size()< maxSizeOfString.size())
    {
        stringVal = "0" + stringVal;
    }
    return stringVal;
}




int main(){
    
    vector<int> array10;
    vector<int> array100;
    vector<int> array500;
    vector<int> array5000;
    vector<int> array25000;
    
    vector<string> stringArray10;
    vector<string> stringArray100;
    vector<string> stringArray500;
    vector<string> stringArray5000;
    vector<string> stringArray25000;



    //data generation
    for (int i = 0; i<10; i++){
        array10.push_back(rand()%21);
        array100.push_back(rand()%101);
        array500.push_back(rand()%501);
        array5000.push_back(rand()%5001);
        array25000.push_back(rand()%25001);

        stringArray10.push_back(randString(stringArray10.size()));
        stringArray100.push_back(randString(stringArray100.size()));
        stringArray500.push_back(randString(stringArray500.size()));
        stringArray5000.push_back(randString(stringArray5000.size()));
        stringArray25000.push_back(randString(stringArray25000.size()));
    }
    for (int i = 10; i<100; i++){
        array100.push_back(rand()%101);
        array500.push_back(rand()%501);
        array5000.push_back(rand()%5001);
        array25000.push_back(rand()%25001);

        stringArray100.push_back(randString(stringArray100.size()));
        stringArray500.push_back(randString(stringArray500.size()));
        stringArray5000.push_back(randString(stringArray5000.size()));
        stringArray25000.push_back(randString(stringArray25000.size()));
    }
    for (int i = 100; i<500; i++){
        array500.push_back(rand()%501);
        array5000.push_back(rand()%5001);
        array25000.push_back(rand()%25001);

        stringArray500.push_back(randString(stringArray500.size()));
        stringArray5000.push_back(randString(stringArray5000.size()));
        stringArray25000.push_back(randString(stringArray25000.size()));
    }
    for (int i = 500; i<5000; i++){
        array5000.push_back(rand()%5001);
        array25000.push_back(rand()%25001);

        stringArray5000.push_back(randString(stringArray5000.size()));
        stringArray25000.push_back(randString(stringArray25000.size()));
    }
    for (int i = 5000; i<25000; i++){
        array25000.push_back(rand()%25001);

        stringArray25000.push_back(randString(stringArray25000.size()));
    }

    auto t1 = Clock::now();
    
    auto t2 = Clock::now();

}