#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <cstring>
using namespace std;

int main()
{
    string a;
    char ans;
    int mark = 0;
    int num = 1;
    int type;
    cout << "Type 0 for 01 question and 1 for 03 question!\n";cin >> type;

    MYSQL* ques;
    MYSQL_RES* res;
    MYSQL_ROW row;

    if(type == 0){
    ques = mysql_init(0);
    ques = mysql_real_connect(ques, "localhost", "Bhonesithu", "142018", "01projectquestion",0,NULL,0);
    int state = mysql_query(ques, "select questions,answers,reasons FROM `chapter 7` ORDER by rand() LIMIT 10");//query

    res  = mysql_store_result(ques);
    while(row = mysql_fetch_row(res))
    {
        cout << num << ". "<< row[0] << endl;
        cin >> ans;
        a = toupper(ans);

        while (a != "A" && a != "B" && a != "C" && a != "D")
        {
            cout << "Invalid answer! try again\n"; cin >> ans;
            a = toupper(ans);
        }
        if (a == row[1])
        {
            cout << "Correct!" << endl << endl;
            mark++;
        }
        else
        {
            cout << "Noob!" << endl;
            cout << row[2] << endl << endl;
        }

            cout << "Type 1 to quit or 0 to continue" << endl;
            cin >> a;
            if (a == "1")
            {
                break;
            }
        num++;
        cout << endl;
    }
    cout << "Quiz is end!\n You got " << mark << " marks out of 10.";
    }
    else{
    ques = mysql_init(0);
    ques = mysql_real_connect(ques, "localhost", "Bhonesithu", "142018", "03project",0,NULL,0);
    int state = mysql_query(ques, "select question,answer,reason FROM ch1 ORDER by rand() LIMIT 10");

    res  = mysql_store_result(ques);
    while(row = mysql_fetch_row(res))
    {
        cout << num << ". " << row[0] << endl;
        cin >> a;
        while (a != "a" && a != "b" && a != "c" && a != "d")
        {
            cout << "Invalid answer! try again\n"; cin >> a;
        }
        if (a == row[1])
        {
            cout << "Correct!" << endl << endl;
            mark++;
        }
        else
        {
            cout << "Noob!" << endl;
            cout << row[2] << endl << endl;
        }

            cout << "Type 1 to quit or 0 to continue" << endl;
            cin >> a;
            if (a == "1")
            {
                break;
            }
        num++;
        cout << endl;
    }
    cout << "Quiz is end!\n You got " << mark << " marks out of 10.";
    }

    return 0;
}



