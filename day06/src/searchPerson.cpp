#include <iostream>
#include "contact.h"
//
// Created by Visupervi on 2025/9/9.
//
using namespace std;

void searchPerson(Contact *contact) {
    string gender;
    for (int i = 0; i < contact->m_size; i++) {
        if (contact->personArr[i].m_sex == 0) {
            gender = "M";
        } else {
            gender = "F";
        }
        cout << "姓名：" << contact->personArr[i].m_name << " 性别：" << gender << " 年龄：" << contact->personArr[i].m_age <<
                " 电话：" << contact->personArr[i].m_phone << " 地址：" << contact->personArr[i].m_address << endl;
        system("pause");
    }
}
