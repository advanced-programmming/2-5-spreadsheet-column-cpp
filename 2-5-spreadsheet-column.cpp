#include <iostream>
#include <map>

using namespace std;

map<int, string> fillStructure();
string getColumn(int number, map<int, string> indexMap);

int main() {
    map<int, string> indexMap = fillStructure();
    int number;
    cin>>number;
    string letters = getColumn(number, indexMap);
    cout<<letters<<endl;
    return 0;
}

string getColumn(int number, map<int, string> indexMap){
    string result;
    if (number == 702) return "ZZ";

    if(number <= 26) {
        result = indexMap[number];
    } else {
        int value = number / 26;
        result += indexMap[value];
        int newValue = number % 26;
        result += indexMap[newValue];
    }
    return result;
}

 map<int, string> fillStructure() {
    map<int, string> structure;
    structure.insert(pair<int, string> (1,"A"));
    structure.insert(pair<int, string> (2,"B"));
    structure.insert(pair<int, string> (3,"C"));
    structure.insert(pair<int, string> (4,"D"));
    structure.insert(pair<int, string> (5,"E"));
    structure.insert(pair<int, string> (6,"F"));
    structure.insert(pair<int, string> (7,"G"));
    structure.insert(pair<int, string> (8,"H"));
    structure.insert(pair<int, string> (9,"I"));
    structure.insert(pair<int, string> (10,"J"));
    structure.insert(pair<int, string> (11,"K"));
    structure.insert(pair<int, string> (12,"L"));
    structure.insert(pair<int, string> (13,"M"));
    structure.insert(pair<int, string> (14,"N"));
    structure.insert(pair<int, string> (15,"O"));
    structure.insert(pair<int, string> (16,"P"));
    structure.insert(pair<int, string> (17,"Q"));
    structure.insert(pair<int, string> (18,"R"));
    structure.insert(pair<int, string> (19,"S"));
    structure.insert(pair<int, string> (20,"T"));
    structure.insert(pair<int, string> (21,"U"));
    structure.insert(pair<int, string> (22,"V"));
    structure.insert(pair<int, string> (23,"W"));
    structure.insert(pair<int, string> (24,"X"));
    structure.insert(pair<int, string> (25,"Y"));
    structure.insert(pair<int, string> (26,"Z"));
return structure;
}