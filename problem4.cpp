#include <iostream>
using namespace std;
int main () {
    // Problem 4
    int N;
    cout<<"Enter the number of students: ";
    cin>>N;
    int lastgroupStudents=N%50;
    int freeComputers=50-N%50;
    if(lastgroupStudents==0) {
        cout << "free computers: 0";
    } else {
        cout << "free computers:" << freeComputers;
    }
    return 0;
}