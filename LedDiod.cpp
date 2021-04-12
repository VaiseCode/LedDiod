#include <iostream>
#include <string>
#include <cmath>
#include "diod.h"

using namespace std;

int main()
{
    LedDiod ld;
    double studRes = ld.calcDiodCurrent(0.5);
    cout << studRes;
}