#include <iostream>
#include <jsoncpp/json/value.h>
#include <jsoncpp/json/json.h>
#include <fstream>
#include <string>

// #include "nlohmann/json.hpp"
// using json = nlohmann::json;
using namespace std;
int main()
{
    // Using fstream to get file pointer in file
    ifstream file("details.json");
    Json::Value actualJson;
    Json::Reader reader;

    // Using reader we parsing the json
    reader.parse(file, actualJson);

    // now the actualJson will have json data
    cout << "Total Json data:" << actualJson << endl;
    cout << "Name:" << actualJson["Name"] << endl;
    cout << "Name:" << actualJson["Dob"] << endl;
    cout << "Name:" << actualJson["Collegue"] << endl;

    return 0;
}