#ifndef LOGGING_H
#define LOGGING_H

#include <string>

class Logging {
    public:
        Logging();
        ~Logging();

        void write(std::string service, std::string message);
};

#endif /* LOGGING_H */