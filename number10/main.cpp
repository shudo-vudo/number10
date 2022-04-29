#include "human.h"

int main()
{
    Student klim("Shuvaev", "Klim", "Sergeevich", 19, true);
    Boss karpov("Karpov", "Dmitrii", "Anatolievich", 46, 28);
    klim.print();
    cout << endl;
    karpov.print();
}
