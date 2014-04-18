#include "Define.h"
#include "SerProc.h"

    SC_HANDLE SCManH;
    LPSERVICE_STATUS ServiceSTATUS;

    SerProc::SerProc()
    {
        SCManH=OpenSCManagerA(NULL,NULL,SC_MANAGER_ALL_ACCESS);
    }

    int SerProc::RemoveSer(const char* Sername)
    {
        SC_HANDLE SerH;
        SerH=OpenServiceA(SCManH,Sername,SERVICE_ALL_ACCESS);

        if(SerH!=NULL)
        {
            ControlService(SerH, SERVICE_CONTROL_STOP, ServiceSTATUS);
            if (DeleteService(SerH)!=0)
            return ServiceDeleted;
            else
            return ServiceNotDelete;
        }else
            return ServiceNotExist;
    }

