#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <vector>

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input, ask;
    std::string all, getcontent;
    int i=0, p=0, j=0;
    std::vector<std::string> arr{};
    std::ifstream infile;
    infile.open("text.txt");
    if(infile.is_open()) {
        while(getline(infile,getcontent)) {
            arr.push_back(getcontent);
            i++;
        }
    }
    p=i;
    std::cout << "Вариант 22 преобразование абзацев" << std::endl;
    std::cout << "Автор: Харитонова Анастасия" << std::endl << std::endl;
    std::cout << "Измененный текст:" << std::endl;
    for(i=p-1;i>=0;i--) {
        if(arr[i] == "") {
            for(j=i+1;j<p;j++) {
                std::cout << arr[j] << std::endl;
            }
            std::cout << std::endl;
            p=i;
        }
    }
    for(j=0;j<p;j++) {
        std::cout << arr[j] << std::endl;
    }
    getline(std::cin, input);

    return 0;
}
