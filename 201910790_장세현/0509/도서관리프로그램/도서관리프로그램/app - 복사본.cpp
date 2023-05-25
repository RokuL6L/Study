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
    printf("[1] 저장\n");
    printf("[2] 검색(도서명으로 검색)\n");
    printf("[3] 수정(도서명으로 검색 후 가격 수정)\n");
    printf("[4] 삭제(도서명으로 검색 후 삭제)\n");
    printf("[5] 검색(동일저자의 모든 도서 검색)\n");
    printf("[6] 프로그램 종료\n");
    printf("***********************************\n");

    return _getch();
}