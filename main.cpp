#include <iostream>
#include "tinyxml2.h"

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " <xml file>" << std::endl;
        return EXIT_FAILURE;
    }

    tinyxml2::XMLDocument doc;
    tinyxml2::XMLError err = doc.LoadFile(argv[1]);

    if (err != tinyxml2::XML_SUCCESS)
    {
        std::cerr << "Error: Can't load XML file: " << doc.ErrorStr() << std::endl;
        return EXIT_FAILURE;
    }

    tinyxml2::XMLElement* root = doc.RootElement();

    if (!root)
    {
        std::cerr << "Error: No root element found!" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Root element: " << root->Name() << std::endl;
    return EXIT_SUCCESS;
}
