#include<iostream>
    class Log 
    {
    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;
    private:
        int m_LogLevel;
    public:
        void Setlevel(int level)
        {
            m_LogLevel = LogLevelInfo ;
        }

        void Warn(const char* message)
        {
            if (m_LogLevel >= LogLevelWarning)
                std::cout << "[WARNING]: " << message << std::endl;
        }
        void Info(const char* message)
        {
            if (m_LogLevel >= LogLevelInfo)
                std::cout << "[INFO]: " << message << std::endl;
        }
        void Error(const char* message)
        {
            if (m_LogLevel >= LogLevelError)
                std::cout << "[WARNING]: " << message << std::endl;
        }



    };

    int main()
    {

        Log log;
        log.Setlevel(log.LogLevelWarning);
        log.Warn("Hello!");
        std::cin.get();
    }

