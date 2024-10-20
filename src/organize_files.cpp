#include "FileOrganizer.h"
#include "Utilities.h"

#include <filesystem>
#include <vector>

int main(const int argc, const char* argv[])
{
    std::setlocale(LC_ALL, "");

    auto paths_n_options {Marvin::collect_paths_and_options(argc, argv)};

    // Process all the paths with provided options.
    Marvin::FileOrganizer {paths_n_options.first, paths_n_options.second}.run();

    return 0;
}