#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <chrono>
using namespace std;
using namespace std::chrono;

struct Person {
    string name;
    string surname;
    int age;
};

vector<Person> GetMoscowPopulation() {
    vector<Person> result(12500000);
    return result;
}

void PrintPopulationSize (vector<Person> p) {
    cout << "There are " << p.size() << " people in Moscow" << endl;
    p.push_back({"Petr", "Petrov", 32});
}

void PrintPopulationSize2 (const vector<Person>& p) {
    cout << "There are " << p.size() << " people in Moscow" << endl;
    /* 
    
    If we want to add next line:
    p.push_back({"Petr", "Petrov", 32});

    we will get an erorr, because we have a constant pointer

    */
}

int main() {
    auto start = steady_clock::now();
    vector<Person> people = GetMoscowPopulation(); 
    auto finish = steady_clock::now();
    cout << "GetMoscowPopulation " << duration_cast<milliseconds> (finish-start).count() << "ms" <<endl;
    
    start = steady_clock::now();
    PrintPopulationSize(GetMoscowPopulation());
    finish = steady_clock::now();
    cout << "PrintPopulationSize " << duration_cast<milliseconds> (finish-start).count() << "ms" <<endl;
    

    start = steady_clock::now();
    PrintPopulationSize2(people);
    finish = steady_clock::now();
    cout << "PrintPopulationSize2 " << duration_cast<milliseconds> (finish-start).count() << "ms" <<endl;
    
    //vector<Person> staff; 
    //staff.push_back({"Ivan", "Ivanov", 25});
    //staff.push_back({"Petr", "Petrov", 32});

    //cout << staff[0].name << "\n";
    // Ivan

    return 0;
}

