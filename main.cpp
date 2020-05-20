#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input, ask;
    std::string all, getcontent, arr[99];
    int i=0, p=0, j=0;

    std::ifstream infile;
    infile.open("text.txt");
    if(infile.is_open()) {
        while(getline(infile,getcontent)) {
            arr[i]=getcontent;
            i++;
        }
    }
    p=i;
    std::cout << "Âàðèàíò 22 ïðåîáðàçîâàíèå àáçàöåâ" << std::endl;
    std::cout << "Àâòîð: Õàðèòîíîâà Àíàñòàñèÿ" << std::endl << std::endl;
    std::cout << "Èçìåíåííûé òåêñò:" << std::endl;
    for(i=p;i>=0;i--) {
        //std::cout << arr[i] << std::endl;
        if(arr[i] == "") { //arr[i] == input óñëîâèå äëÿ ïîèñêà çíà÷åíèÿ ïî ñòðîêå öåëèêîì à íå ïî åå ÷àñòè
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
