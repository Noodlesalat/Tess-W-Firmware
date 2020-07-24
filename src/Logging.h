#include <string>

class Logging {
    public:
        Logging();
        ~Logging();

        void write(std::string service, std::string message);
};