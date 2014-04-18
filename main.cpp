#include <string.h>
#include <iostream>
#include "Define.h"
#include "FileProc.h"
#include "RegProc.h"
#include "SerProc.h"
using namespace std;

//service string
string windir = getenv("windir");
const char* SerStr[]={
    "280D4C48-4FA2-4274-ACEC-1582EFA5DA7D",
    "MgTaki",
    "MsPowerSvc"
    };
//machine registry
const char* RegAppID[]={
    "{56835A03-3BAA-49F0-BA6E-8EEFD6D62991}",
    "{FC7E85B1-FB3F-4D78-AA2F-EC5EEFBFAB75}"
    };
const char* RegCLSID[]={
    "{19292342-2D7D-4FF9-B65E-14B4796DF217}",
    "{56835A03-3BAA-49F0-BA6E-8EEFD6D62960}",
    "{56835A03-3BAA-49F0-BA6E-8EEFD6D62991}",
    "{FC7E85B1-FB3F-4D78-AA2F-EC5EEFBFAB75}"
    };
const char* RegInterface[]={
    "{19292342-2D7D-4FF9-B65E-14B4796DF217}",
    "{56835A03-3BAA-49F0-BA6E-8EEFD6D62960}",
    "{DD3FAED2-92E8-4486-8955-BFAFB3742B6B}",
    "{DD3FAED2-92E8-4486-8955-BFAFB3742B6C}",
    "{DD3FAED2-92E8-4486-8955-BFAFB3742B6D}",
    "{DD3FAED2-92E8-4486-8955-BFAFB3742B6E}",
    "{EF5AF0D3-40D1-4741-A399-873EB6FF0BA7}",
    };
const char* RegSoftware[]={
    "KingWay"
    };
const char* RegRun[]={
    "Xnet2"
    };
const char* RegSharedDLLs[]={
    "\\system32\\gn.exe",
"\\system32\\looklog.exe",
"\\system32\\lookpic.exe",
"\\system32\\xconfigs.dat",
"\\system32\\XNet2.exe",
"\\system32\\XDaemon.exe",
"\\system32\\kwdata.exe",
"\\system32\\Update.exe",
"\\HNCLIB\\FalunWord.lib",
"\\Surfgd.dll",
"\\dbServ.dll",
"\\CImage.dll",
"\\Handler.dll",
"\\HASrv.dll",
"\\HncEng.exe",
"\\HncEngPS.dll",
"\\InjLib32.dll",
"\\MPSvcDll.dll",
"\\MPSvcPS.dll",
"\\SentenceObj.dll",
"\\MPSvcC.exe",
"\\vnew.bmp",
"\\xstring.s2g",
"\\kwselectinfopp.dll",
"\\kwimage.dll"
    };
const char* RegMic[]={
    "xnet2"
    };
const char* RegWinS[]={
    "DBFILTER"
    };
const char* RegMUICache[]={
    "\\MPSvcC.exe",
    "\\HncEng.exe",
    "\\system32\\XNet2.exe"
    };
//File string
const char* FileStr[]={
    "\\CardLib.dll",
"\\CImage.dll",
"\\cximage.dll",
"\\dbfilter.dll",
"\\dbServ.dll",
"\\Handler.dll",
"\\HASrv.dll",
"\\HncEng.exe",
"\\HncEngPS.dll",
"\\HncStdRun.ini",
"\\image.dat",
"\\image1.dat",
"\\InjLib32.dll",
"\\kwimage.dll",
"\\kwselectinfopp.dll",
"\\MPSvcC.exe",
"\\MPSvcDll.dll",
"\\MPSvcPS.dll",
"\\SentenceObj.dll",
"\\Surfgd.dll",
"\\testlog.txt",
"\\vnew.bmp",
"\\xstring.s2g",
"\\help\\kw.chm",
"\\HNCLIB\\FalunWord.lib",
"\\log\\0.000",
"\\log\\desktop.ini",
"\\snap\\0.000",
"\\snap\\desktop.ini",
"\\system32\\1.urf",
"\\system32\\2.urf",
"\\system32\\3.urf",
"\\system32\\4.urf",
"\\system32\\5.urf",
"\\system32\\6.urf",
"\\system32\\7.urf",
"\\system32\\adwapp.dat",
"\\system32\\adwfil.dat",
"\\system32\\appface.dll",
"\\system32\\auctfil.dat",
"\\system32\\bnrfil.dat",
"\\system32\\bsnlst.dat",
"\\system32\\chtfil.dat",
"\\system32\\csnews.dat",
"\\system32\\cultfil.dat",
"\\system32\\entfil.dat",
"\\system32\\filtport.dat",
"\\system32\\FImage.dll",
"\\system32\\finfil.dat",
"\\system32\\fmfil.dat",
"\\system32\\fshrfil.dat",
"\\system32\\gblfil.dat",
"\\system32\\gdwfil.dat",
"\\system32\\gn.exe",
"\\system32\\gnfil.dat",
"\\system32\\hatfil.dat",
"\\system32\\iawfil.dat",
"\\system32\\imgfil.dat",
"\\system32\\IPGate.dll",
"\\system32\\jbfil.dat",
"\\system32\\kwdata.exe",
"\\system32\\lgwfil.dat",
"\\system32\\looklog.exe",
"\\system32\\lookpic.exe",
"\\system32\\movfil.dat",
"\\system32\\mp3fil.dat",
"\\system32\\nvgamfil.dat",
"\\system32\\perfil.dat",
"\\system32\\picsfil.dat",
"\\system32\\pkmon.dat",
"\\system32\\popfil.dat",
"\\system32\\poppo.dll",
"\\system32\\psyfil.dat",
"\\system32\\RunAfterSetup.exe",
"\\system32\\sporfil.dat",
"\\system32\\swfil.dat",
"\\system32\\sys.dat",
"\\system32\\sysEx.dat",
"\\system32\\tafil.dat",
"\\system32\\tapfil.dat",
"\\system32\\TrustUrl.dat",
"\\system32\\Update.exe",
"\\system32\\vgamfil.dat",
"\\system32\\viofil.dat",
"\\system32\\wfile.dat",
"\\system32\\wfileu.dat",
"\\system32\\win2kspi.reg",
"\\system32\\Win98Spi.reg",
"\\system32\\winvista.reg",
"\\system32\\winxpSpi.reg",
"\\system32\\wrestfil.dat",
"\\system32\\wzfil.dat",
"\\system32\\x100.dat",
"\\system32\\x100.jpg",
"\\system32\\x200.dat",
"\\system32\\x200.jpg",
"\\system32\\x300.dat",
"\\system32\\x300.jpg",
"\\system32\\x400.dat",
"\\system32\\x400.jpg",
"\\system32\\x500.jpg",
"\\system32\\x600.jpg",
"\\system32\\xabout.dat",
"\\system32\\xconfigs.dat",
"\\system32\\xcore.dll",
"\\system32\\Xcv.dll",
"\\system32\\XDaemon.exe",
"\\system32\\XFimage.xml",
"\\system32\\XNet2.exe",
"\\system32\\xnet2_lang.ini",
"\\system32\\Xtool.dll",
"\\system32\\xwordh.dat",
"\\system32\\xwordl.dat",
"\\system32\\xwordm.dat",
"\\system32\\Drivers\\mgtaki.sys",
"\\TEMP\\HncEng.exe.log",
"\\TEMP\\MPSvcC.exe.log"
    };

void Process(void);
void RegHand (const char* key, const char* subkey, const char* str[],int len,bool iskey, bool needcat);

int main()
{
    char input;
    system("Title GreenDam Removal");
    cout << "Welcome to using GreenDam(LvBa) Removal by Tom Cheung" << endl;
    cout << "This removal will remove Riskware.GreenDam and reset winsock." << endl;
    cout << "Do you want to remove GreenDam now?[y/n]" << endl;
    cin >> input;
    while(input!='y'&&input!='n'){
        cout << "Wrong input, please input again." << endl;
        cin >> input;
    }
    if(input=='y')
    Process();
    else return 0;
    cout << endl << "Finished! Thanks for using GreenDam(LvBa) Removal." << endl
    << "Now please remove the GreenDam(LvBa) shortcut and startmenu."  << endl
    << "And reboot your computer."<<endl;
    system("pause");
    return 0;
}

void Process(void)
{
    //Load Process
    SerProc SP;
    FileProc FP;
    //Kill Process using command
    system("taskkill /im MPSvcC.exe /im XNet2.exe /im XDaemon.exe /im HncEng.exe 2>nul");
    //Remove Service
    for(int i=0;i<(int)length(SerStr);i++)
    {
        if (SP.RemoveSer(SerStr[i])==ServiceDeleted)
        cout << "Service => " << SerStr[i] << " Removed!"<<endl;
    }
    //Remove Registry
    RegHand("HKLM","software\\Classes\\AppID",RegAppID,(int)length(RegAppID),true,false);
    RegHand("HKLM","software\\Classes\\clsid",RegCLSID,(int)length(RegCLSID),true,false);
    RegHand("HKLM","software\\Classes\\Interface",RegInterface,(int)length(RegInterface),true,false);
    RegHand("HKLM","software",RegSoftware,(int)length(RegSoftware),true,false);
    RegHand("HKLM","software\\microsoft\\Windows\\CurrentVersion\\Run",RegRun,(int)length(RegRun),false,false);
    RegHand("HKLM","software\\microsoft\\Windows\\CurrentVersion\\SharedDLLs",RegSharedDLLs,(int)length(RegSharedDLLs),false,true);
    RegHand("HKLM","software\\microsoft",RegMic,(int)length(RegMic),true,false);
    RegHand("HKLM","SYSTEM\\CurrentControlSet\\Services",SerStr,(int)length(SerStr),true,false);
    RegHand("HKLM","SYSTEM\\CurrentControlSet\\Services\\WinSock2",RegWinS,(int)length(RegWinS),true,false);
    RegHand("HKU",".DEFAULT\\Software\\Microsoft\\Windows\\ShellNoRoam\\MUICache",RegMUICache,(int)length(RegMUICache),false,true);
    RegHand("HKU","current\\software\\Microsoft\\Windows\\ShellNoRoam\\MUICache",RegMUICache,(int)length(RegMUICache),false,true);
    //Remove File
    for(int i=0;i<(int)length(FileStr);i++)
    {
        string TmpStr=windir;
        TmpStr=TmpStr+FileStr[i];
        int rel = FP.RemoveFile(TmpStr.c_str());
        if (rel==FileDeleted)
        cout << "File => " << TmpStr << " Removed!" << endl;
        else if(rel==DeleteOnReboot)
        cout << "File => " << TmpStr << " Remove on reboot!" << endl;
    }
    //Remove Dir
    system("rd /s /q %windir%\\HNCLIB 2>nul");
    system("rd /s /q %windir%\\log 2>nul");
    system("rd /s /q %windir%\\snap 2>nul");
    system("rd /s /q %windir%\\system32\\sysdir 2>nul");
    //Reset winsock
    system("netsh winsock reset >nul 2>nul");
}

void RegHand (const char* key, const char* subkey, const char* str[],int len, bool iskey, bool needcat)
{
    RegProc RP;
    int rel;
    for(int i=0;i<len;i++)
    {
        string TmpStr=windir;
        if(needcat)
        TmpStr=TmpStr+str[i];
        else TmpStr=str[i];
        if(iskey)
        rel=RP.RemoveKey(key,subkey,TmpStr.c_str());
        else rel=RP.RemoveItem(key,subkey,TmpStr.c_str());
        if (rel==KeyDeleted)
        cout <<"Registry => " << TmpStr << " Removed!"<< endl;
    }
}
