#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct student
{
int mark, age, scholarship;
string name;
};
int main()
{
// read the file 
srand((unsigned)time(NULL));
ifstream be("marks.txt");
if (be.fail())
{
cerr << "error";
system ("pause");
exit(1);
}
int i = 0, j, db = 0;
student school[12];
while (!be.eof())
{
be >> school[i].name;
be >> school[i].mark;
i++;
}
db = i;
be.close();
cout << "\n" << db << " student in the class" << endl;
for (int j = 0; j < db; j++)
{
do
{
cout << "give me the student age " << endl;
cin >> school[j].age;
}
while (school[j].age < 17 || school[j].age>21);
school[j].scholarship = (rand() % 30001) + 20000;
}
//  all the data of the students on the screen!
for (int j = 0; j < db; j++)
{
cout << school[j].name << " " << school[j].mark << " " << school[j].age <<" "<< school[j].scholarship<<endl;
}
cout << endl;
//the avg of marks
int avg = 0;
for (i = 0; i < db;i++)
avg = avg + school[i].mark;
cout << "An avarage for marks : " << (float)avg / db << endl;
//the avg of ages 
int avg2 = 0;
for (i = 0; i < db;i++)
avg2 = avg2 + school[i].age;
cout << "the avarage for age  : " << (float)avg2 / db << endl;
//the total of scholarship
int toatal = 0;
for (i = 0; i < db;i++)
toatal = total + school[i].scholarship;
cout << "The total scholarship : " << total << endl
// Decide whether there was a failure in any of the semesters!
i = 0;
while ((i < db) && (school[i].mark != 1))
i++;
if (i < db) cout << "\n there is failure" << endl;
// Who received the most scholarships in the group? (the first is enough if there are more.)
int max = 0;
for (i = 1; i < db;i++)
{
if (school[i].scholarships > school[max].scholarships) max = i;
}
cout << "\n The student who receive the biggest scholarships " << school[max].name << endl;
// How old are they over 18? Print the result on the screen
int count = 0;
for (i = 0; i < db;i++)
{
if (school[i].age > 18) count=count+1;
}
cout << "\nin class , this number are older than 18 years: " << count << endl;
// new text file 
ofstream output("new_marks.txt");
for (int j = 0; j < db; j++)
{
ki << school[j].name << " " << school[j].mark << " " << school[j].age <<" "<< school[j].scholarships<<endl;
}
cout << endl;
system("PAUSE");
return EXIT_SUCCESS;
}













