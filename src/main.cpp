#include "Application.hpp"

int main()
{
    g_Application->Init();
    g_Application->Run();
    g_Application->Shutdown();

    return 0;
}
