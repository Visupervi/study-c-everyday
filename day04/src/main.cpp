#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
using namespace std;
// void bubbleSort(int *arr, int size) {
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
//
// void printArray(int *arr, int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << endl;
//     }
// }
// struct Student {
//     string name;
//     int age;
//     int score;
// };
struct Student {
    string name;
    int age;
    int score;
};
struct Teacher {
    string TName;
    Student StudentArr [5];
};

void createTeacher(Teacher *teacher, int len) {
    string nameSeed = "ABCDEFG";
    for (int i = 0; i < len; i++) {
        teacher[i].TName = "Teacher_";
        teacher[i].TName += nameSeed[i];
        for (int j = 0; j < 5; j++) {
            int randomNum = rand() % 61 + 40;
            teacher[i].StudentArr[j].name = "Student_";
            teacher[i].StudentArr[j].name += nameSeed[j];
            teacher[i].StudentArr[j].age = 18;
            teacher[i].StudentArr[j].score = randomNum;
        }

    }
}

void printfTeacher(Teacher *teacher, int len) {
    for (int i = 0; i < len; i++) {
        cout << "teacherName_= " << teacher[i].TName << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t studentName = " << teacher[i].StudentArr[j].name << " Score = " << teacher[i].StudentArr[j].score << endl;
        }
    }
}
int main() {

    // 随机种子
    srand((unsigned int) time(NULL));
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    // auto lang = "C++";
    // std::cout << "Hello and welcome to " << lang << "!\n";
    //
    // for (int i = 1; i <= 5; i++) {
    //     // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
    //     std::cout << "i = " << i << std::endl;
    // }

    // int arr[10] = {4,3,6,9,10,2,5,7,8,4};
    // bubbleSort(arr, sizeof(arr) / sizeof(int));
    // printArray(arr, sizeof(arr) / sizeof(int));
    //
    // Student student;
    // student.name = "John";
    // student.age = 18;
    // student.score = 20;
    // cout << " name= " << student.name << " age= " << student.age << " score= " << student.score << endl;
    //
    // Student *studentPtr = &student;
    // cout << "name ==" << studentPtr ->name;

    // create teacher
    Teacher teacher[3];
    createTeacher(teacher, sizeof(teacher) / sizeof(teacher[0]));
    printfTeacher(teacher, sizeof(teacher) / sizeof(teacher[0]));
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
