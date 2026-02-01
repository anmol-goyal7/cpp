#include<iostream>
int main()
{
    class Log 
    {
    public:
        void Setlevel(int level)
        {

        }

        void Warn(const char* message)
        {

        }

    };

    int main()
    {

        Log log;
        log.Setlevel(LogLevelWarning);
        log.Warn("Hello!");
        std::cin.get();
    }

