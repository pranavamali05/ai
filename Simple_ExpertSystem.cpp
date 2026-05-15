#include<bits/stdc++.h>
using namespace std;

class Employee{
    int attendance, quality, projects, teamwork;
    bool deadline;

    public:
    Employee(){
        attendance = 0, quality = 0, projects = 0, teamwork = 0, deadline = false;
    }
    
    void getInput(){
        cout << "Enter the attendance (0-100): ";
        cin >> attendance;

        cout << "Enter Work quality (1-10): ";
        cin >> quality;

        cout << "Enter teamwork (1-10): ";
        cin >> teamwork;

        cout << "Enter no. of projects: ";
        cin >> projects;

        string str;
        cout << "deadline met (yes/no): ";
        cin >> str;

        transform(str.begin(), str.end(), str.begin(), ::tolower);
        deadline = (str.find('y') != string::npos || str.find('1') != string::npos);
    }

    void displayData(){
        cout<<"\nEmployee Information\n";
        cout<<"Attendance : "<<attendance<<endl;
        cout<<"Quality    : "<<quality<<endl;
        cout<<"Teamwork   : "<<teamwork<<endl;
        cout<<"Projects   : "<<projects<<endl;
        cout<<"Deadline   : "<<(deadline ? "Yes" : "No")<<endl;
    }

    void evaluate(){
        if(attendance> 90 && quality > 8 && teamwork > 8 && deadline && projects >= 5){
            cout << "\nRating: Outstanding Performer\n";
            cout << "Excellent attendance & work quality.\n";
            cout << "You are ready for leadership roles.\n";
        } 
        else if(attendance> 90 && quality > 8 && teamwork > 8 && deadline ){
            cout << "\nRating: Excellent\n";
            cout << "Excellent attendance & work quality.\n";
            cout << "Keep maintaining consistency\n";
        } 
        if(attendance> 80 && quality > 7 && deadline ){
            cout << "\nRating: Technically Performer\n";
            cout << "Excellent attendance & work quality.\n";
            cout << "Try improving communication & teamwork.\n";
        } 
        if(projects >= 3 && quality > 6 ){
            cout << "\nRating: Outstanding \n";
            cout << "You contribute well in projects.\n";
            cout << "Work on consistency for better performance.\n";
        } 
        if( quality > 8 && teamwork > 8){
            cout << "\nRating: Good team player\n";
            cout << "Excellent with team.\n";
            cout << "Improve technical or work skills.\n";
        } 
        if(attendance> 90 && quality > 8 && teamwork > 8 && deadline && projects >= 5){
            cout << "\nRating: Outstanding Performer\n";
            cout << "Excellent attendance & work quality.\n";
            cout << "You are ready for leadership roles.\n";
        } 


    }
};

int main(){
    Employee e;

    e.getInput();
    e.displayData();
    e.evaluate();

    return 0;
}