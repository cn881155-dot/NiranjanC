#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main() {
    ofstream outfile("students.txt");
    if(outFile.is_open()) {
        outFile<<left<<setw(10)<<"ID"<<setw(20)<<"Name"<<setw(10)<<"CGPA"<<endl;
        outFile<<string(40,'-')<<endl;
        outFile<<left<<setw(10)<<"ID"<<setw(20)<<"Arjun"<<setw(10)<<"8.75"<<endl;
        outFile<<left<<setw(10)<<"ID"<<setw(20)<<"Priya"<<setw(10)<<"9.2"<<endl;
        outFile.close();
    }
    ifstream inFile("student.txt");
    string line;
    if (inFile.is_open()) {
        cout<<"===Students Record==="<<endl;
        while(getline(inFile,line)) {
            cout<<line<<endl;
        }
        inFile.close();
    }
    ifstream numFile("nuumber.txt");
    int sum=0,num;
    ofstream createNum("numbers.txt");
    createNum<<10<<" "<<20<<" "<<30<<" "<<40<<" "<<50;
    createNum.close();
    numFile.open("numbers.txt");
    while(numFile>>num) {
        sum+=num;
    }
    numFile.close();
        cout<<"\nSum of numbers:"<<sum<<endl;
    }
     