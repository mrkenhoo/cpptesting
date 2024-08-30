#include "common.hpp"

#include "Application.hpp"
#include "Updater.hpp"

namespace cpptesting
{
    void Application::Init()
    {
        g_Application = new Application;
        g_Updater = new Updater;
    }

    void Application::Run()
    {
        std::cout << "Hello, World!" << std::endl;
        if (g_Updater->IsUpdatable())
        {
            g_Updater->UpdateRepos();
        }
        else
        {
            g_Updater->UpdatePackages();
        }
    }

    void Application::Shutdown()
    {
        delete g_Application;
        g_Application = nullptr;
    }

    Application::~Application() {}
}
