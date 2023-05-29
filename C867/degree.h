
#ifndef degree_h
#define degree_h

#include <string>
#pragma once
using namespace std;

//C. Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.
enum DegreeProgram {SECURITY, NETWORK, SOFTWARE, UNDEFINED};

//Array to convert enumerated value to text
const string Programs[] = {"Security", "Network", "Software", "Undefined"};

#endif
