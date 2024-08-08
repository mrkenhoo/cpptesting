#pragma once

#include "common.hpp"

namespace cpptesting
{
    class Updater
    {
    public:
        void UpdateRepos();
        void UpdatePackages();
        const bool IsUpdatable() { return UpdatesAvailable; }
        ~Updater();

    private:
        bool UpdatesAvailable;
        const char *PACKAGE_MANAGER = "/usr/bin/pacman";
        const char *UPDATE_REPOS_CMD = "/usr/bin/pacman -Sy";
        const char *UPGRADE_PACKAGES_CMD = "/usr/bin/pacman -Su --needed";
    };
}

inline cpptesting::Updater* g_Updater = nullptr;
