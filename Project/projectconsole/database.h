#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED



#endif // DATABASE_H_INCLUDED
#include<iostream>
#include <windows.h>
#include <mysql.h>
using namespace std;
void data(){
int mark = 0;
    MYSQL* ques;

    MYSQL_RES* res;
    MYSQL_ROW row;

    ques = mysql_init(0);
    ques = mysql_real_connect(ques, "localhost", "Bhonesithu", "142018", "question",0,NULL,0);
    int state = mysql_query(ques, "select question,answers,reasons FROM qanda ORDER by rand() LIMIT 5");

    res  = mysql_store_result(ques);
}
