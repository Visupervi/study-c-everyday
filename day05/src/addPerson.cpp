//
// Created by Visupervi on 2025/9/8.
//

#include <iostream>
#include <ostream>

#include "contact.h"
using namespace std;
void addPerson(Contact *contact) {
    if (contact->m_size < MAX) {

        Person person;

        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        person.m_name = name;

        int sex;
        cout << "请输入性别：" << endl;
        cin >> sex;
        person.m_sex = sex;

        int age;
        cout << "请输入年龄" << endl;
        cin >> age;
        person.m_age = age;

        string tel;
        cout << "请输入电话" << endl;
        cin >> tel;
        person.m_phone = tel;


        string address;
        cout << "请输入地址" << endl;
        cin >> address;
        person.m_address = address;
        contact->personArr[contact->m_size] = person;
        contact->m_size++;

        return;
    } else {
        cout << "通讯录已经满了" << endl;
        return;
    }
}
