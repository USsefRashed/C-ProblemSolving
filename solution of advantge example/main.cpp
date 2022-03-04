#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void sum (int loop ){
cout << "Entre your numbers\n";
float num;
float sum{0};
for (int i = 0; i < loop; i++)
{
    cin >> num ;
    sum += num;
    
}

cout << "your sum = " << sum << endl;
}


void prod (int loop ){
cout << "Entre your numbers\n";
float num;
float sum{0};
for (int i = 0; i < loop; i++)
{
    cin >> num ;
    sum *= num;
    
}

cout << "your sum = " << sum << endl;
}


void avreg (int loop ){

cout << "Entre your numbers\n";

float num[100];
float sum{0};
for (int i = 0; i < loop; i++)
{
    cin >> num[i] ;
    sum = sum+ num[i];
}
sort(num,num+loop);

if (loop % 2 == 0)
{
    cout << "your midian = " << (num[loop/2]+num[(loop/2)+1]/2) << endl;
}
else {
    cout << "your midian = " << num[(loop/2)+1] << endl;
}


sum  = sum / loop;

cout << "your avreage = " << sum << endl;
}




int main () {

    int chose,loop ;
    cout << "entre your number of numbers";
    cin >> loop;

    cout << "if you want calculate sum of group of nums enter ( 1 )" << endl;
    cout << "if you want calculate production of group of nums entre ( 2 )" << endl;
    cout << "if you want calculate avrege of group of nums and meen entre ( 3 )" << endl;

    cin >> chose;

    switch (chose)
    {
    case 1:
        sum(loop);
        break;
    case 2 :
        prod(loop);
        break;
    case 3 :
        avreg(loop);
        break;
    
    default:
    cout << "please entre coorect number";
        break;
    }




}