/* 
Júlio Shoji Zotovici Kobayashi
Class menu
June, 2024
*/

#ifndef MENU_HPP_

#define MENU_HPP_

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;
class menu {

    private:
        string title;
        vector<string> option;
        string pattern;
        int width;

    public:
        menu(vector<string> &option, string title = "Menu", string pattern = "*"); 
        ~menu();
        void setPattern(const string &pattern);
        void setTitle(const string &title);
        void setWidth();
        void setDecorator();
        int getChoice();
        void drawLine();
        void drawMenu();

        bool isValidChoice(int choice);
};

#endif