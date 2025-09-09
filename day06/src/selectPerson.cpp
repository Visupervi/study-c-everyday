//
// Created by Visupervi on 2025/9/8.
//

#include <iostream>

#include "addPerson.h"
#include "searchPerson.h"
#include "showMenu.h"
#include "deletePerson.h"
// #include "searchPerson.h"
using namespace std;

void selectPerson() {
    int select = 0;
    Contact contact;
    while (true) {
        showMenu();
        cin >> select;
        switch (select) {
            case 1:
                addPerson(&contact);
                break;
            case 2:
                searchPerson(&contact);
                break;
            case 3:
                deletePerson(&contact, &person);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                break;
        }
    }
}
