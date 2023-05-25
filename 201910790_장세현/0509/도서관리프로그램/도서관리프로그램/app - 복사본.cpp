//app.cpp
#include "std.h"

App::App()
{

}

App::~App()
{

}

void App::init()
{
    MyLib::logo();
}

void App::run()
{
    while (true)
    {
        system("cls");
        control.book_printall();
        switch (menuprint())
        {
        case '1': control.book_insert();      break;
        case '2': control.book_select();      break;
        case '3': control.book_update();   break;
        case '4': control.book_delete();   break;
        case '5': control.book_select_author();      break;
        case '6': return;
        }
        system("pause");
    }
}

void App::exit()
{
    MyLib::ending();
}

char App::menuprint()
{
    printf("***********************************\n");
    printf("[1] ����\n");
    printf("[2] �˻�(���������� �˻�)\n");
    printf("[3] ����(���������� �˻� �� ���� ����)\n");
    printf("[4] ����(���������� �˻� �� ����)\n");
    printf("[5] �˻�(���������� ��� ���� �˻�)\n");
    printf("[6] ���α׷� ����\n");
    printf("***********************************\n");

    return _getch();
}