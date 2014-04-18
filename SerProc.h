#ifndef SERPROC_H_INCLUDED
#define SERPROC_H_INCLUDED
#include <windows.h>

class SerProc
{
    private:
    SC_HANDLE SCManH;
    LPSERVICE_STATUS STATUS;
    public:
    SerProc::SerProc();
    int SerProc::RemoveSer(const char* Sername);
};

#endif // SERPROC_H_INCLUDED
