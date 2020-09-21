
#include <boost/program_options.hpp>
#include <exception>
#include <iostream>
#include <filesystem>
#include <vector>
#include <string>

namespace bpo = boost::program_options;
namespace fs = std::filesystem;

int main(int ac, char* av[])
{
    int level;
    int min_size;
    int block_size;

    bpo::options_description desc{"Options"};
    desc.add_options()
    ("include,i",bpo::value<std::vector<fs::path>>()->multitoken()->composing(),"Include path for scanning")
    ("exclude,e",bpo::value<std::vector<fs::path>>()->multitoken()->composing(),"Exclude directory")
    ("level,l",bpo::value<int>(&level)->default_value(-1),"Maximum depth of scan, -1 no limit")
    ("min-size,s",bpo::value<int>(&min_size)->default_value(5),"Minimum file size in bytes")
    ("mask,m",bpo::value<std::vector<std::string>>()->multitoken(),"Masks for filename")
    ("block,b",bpo::value<int>(&block_size)->default_value(10),"Block size in bytes")
    ("Hash,h",bpo::value<std::string>()->default_value("crc16"),"Hash algorithm")
    ("Help,h","Help scrren");



    return 0;
}
