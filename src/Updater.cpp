#include "Updater.hpp"

namespace cpptesting
{
    void Updater::UpdateRepos()
    {
        system(UPDATE_REPOS_CMD);

        std::cout << std::ifstream(UPDATE_REPOS_CMD).rdbuf() << std::endl;
    }

    void Updater::UpdatePackages()
    {
        system(UPGRADE_PACKAGES_CMD);
    }

    Updater::~Updater() {
        delete g_Updater;
        g_Updater = nullptr;
    }
}
