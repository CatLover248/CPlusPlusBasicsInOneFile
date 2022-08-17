#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Video: https://youtu.be/raZSmcariyU?t=1766

int addNumbers(int num1, int num2){
    return num1 + num2;
}

int multiplyNumbers(int num1, int num2);

double division(int a, int b){
    if(b == 0 || a == 0 ){
        throw "Divison by zero error!";
    }
    return (a/b);
}

int main()
{
    cout<<"Hello world" << endl;
    cout <<"I like";
    cout <<"cats"<<endl;

    string catname = "Meowie";
    char TestGrade = 'A';
    short age0 = 1;
    long age1 = 123;
    long long age2 = 247;
    int age3 = 237;
    unsigned int age4 = 345;

    float gpa0 = 2.5f;
    double gpa1 = 2.45;
    long double = 1331.111;

    bool isTall;
    isTall = false;// I shorty

    int const BIRTHYEAR = 2009;
    // BIRTHYEAR = 2008 <- you cant do that cause its a const

    cout << (int)3.15 << endl;
    cout << (double) 3/2 << endl;

    int num 10;
    cout<< &num<<endl;
    int *pNum = &num;
    cout << pNum << endl;
    cout << *pNum<< endl;

    string name = "CatLover";
    //      index  12345678

    cout << name.length(); << endl;
    cout << name[0]<< endl;
    cout << name.find("Cat") << endl;
    cout << name.substr(1) << endl;
    cout << name.substr(1, 5) << endl;

    int num = 10;

    cout << 2*3 << endl;
    cout << 10 % 3 << endl;
    cout << 1+2 *3 << endl
    cout << (3+ 2) * 3 << endl;
    cout << 10/ 3.0 << endl;
    cout << 10 / 2 << endl;

    num += 1; // +=, -=, /=, *=
    num++; // num++ = num += 1
    num--; // num-- = num -= 1

    string input;
    cout <<"Enter name:";
    cin >> input;
    cout <<"Hello"<< input << endl;

    int num1, num2;
    cout << "Enter first num:";
    cin >> num1;
    cout << "Enter second num:";
    cin >> num2;
    cout << "Answer:" << num1+num2 << endl;

    int numbers[] = {2,5,2,4,24,42,4};
    cout << numbers[0]; << endl;

    int numbers2[2];
    numbers2[0] = 3;
    numbers2[1] = 1;
    cout << numbers2[0]; << endl


    int numbers3[][] = {{1,1,2}, {1,2,3}};
    cout << numbers3[1][2] << endl;

    int numbers4 [2][3];
    numbers4[1][2] = 1;
    cout << numbers4 << endl;

    vector<string> friends;
    friends.push_back("Kevin");
    friends.insert(friends.begin() + 1 "Jim");

    cout << friends.at(1); << endl;
    cout << friends.size() << endl;
    friends.erase("Jim");


    int sum = addNumbers(4,62);
    cout << sum << endl;

    int sum2 = multiplyNumbers(4,62);
    cout << sum2 << endl;

    string myString = "cat";
    if(myString.compare("cat") == 0){
        cout << "myString is equal to cat" << endl;
    }

    char myGrades = 'A'M
    switch(myGrade){
        case'A':
            cout << "you Pass" << endl;
            break;
        case 'F':
            cout << "you Fail" << endl;
            break;
        default:
            cout "invalid grade"<<endl;

    }

    int index1 = 1
    do{
        cout << index1 << endl;
        index1++;
    } while(index1 <= 1);

    for(int i = 0; i < 5; i++){
        cout << "Hello world" << i << endl;

    }

    int index2 = 6;
    while(index2 <= 6){
        cout << index2 << endl;
    }

    try{
        division(10, 0);
    } catch(const char* msg){
        cerr << msg << endl;
    }




    return 0;
}


int multiplyNumbers(int num1, int num2){
    return num1 * num2;
}
