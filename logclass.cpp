#include<iostream>
    class Log 
    {
    public:
        enum Level
        {
           LevelError = 0, LevelWarning, LevelInfo
        };

    private:
        Level m_LogLevel = LevelInfo;
    public:
        void Setlevel(Level level)
        {
            m_LogLevel =LevelInfo ;
        }

        void Warn(const char* message)
        {
            if (m_LogLevel >= LevelWarning)
                std::cout << "[WARNING]: " << message << std::endl;
        }
        void Info(const char* message)
        {
            if (m_LogLevel >=LevelInfo)
                std::cout << "[INFO]: " << message << std::endl;
        }
        void Error(const char* message)
        {
            if (m_LogLevel >=LevelError)
                std::cout << "[WARNING]: " << message << std::endl;
        }
    };

    int main()
    {

        Log log;
        log.Setlevel(Log::LevelError);
        log.Warn("Hello!");
        std::cin.get();
    }

