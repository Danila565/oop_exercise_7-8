#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <memory>
#include <fstream>
#include "figure.h"
#include "five_angles.h"
#include "six_angles.h"
#include "eight_angles.h"
#include "document.h"
#include "factory.h"

void Menu(){
    std::cout << "new- Create document.\n";
    std::cout << "save- Save document.\n";
    std::cout << "load- Open document.\n";
    std::cout << "add- Add figure.\n";
    std::cout << "erase- Remove figure.\n";
    std::cout << "print- Print all figures.\n";
    std::cout << "undo- Undo.\n";
    std::cout << "exit- Exit.\n\n";
}

int main() {
    Menu();
    std::string command;
    factory fact;
    std::unique_ptr<document> doc1;
    while(std::cin >> command){
        if(command=="new"){
            doc1=std::make_unique<document>();
        }else if(command=="save"){
            std::string path;
            std::cin >> path;
            std::ofstream os(path);
            doc1->save(os);
            os.close();
        }else if(command=="load"){
            std::string path;
            std::cin >> path;
            std::ifstream is(path);
            if(is) {
                doc1->load(is);
            }else {
                std::cout << "No such file\n";
            }
            is.close();
        }else if(command=="add"){
            fact.construct(doc1);
        }else if(command=="erase"){
            size_t id;
            std::cin >> id;
            doc1->remove_figure(id);
        }else if(command=="print"){
            doc1->show(std::cout);
        }else if(command == "undo"){
            doc1->undo();
        }else if(command == "exit"){
            break;
        }
        else{
            std::cout << "Wrong command";
        }
    }
    return 0;
}